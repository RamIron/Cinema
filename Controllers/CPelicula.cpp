#include "CPelicula.hh"
#include "../Clases/Credito.hh"
#include "../Clases/Debito.hh"
#include "../Clases/Reloj.hh"
#include "../Clases/Reserva.hh"
#include "../Handlers/ManejadorFinanciera.hh"
#include "../Handlers/ManejadorFuncion.hh"
#include "../Handlers/ManejadorPelicula.hh"
#include "CCine.hh"

CPelicula *CPelicula::cpInstance = NULL;

CPelicula::CPelicula() {}

CPelicula *CPelicula::getInstance() {
  if (cpInstance == NULL) {
    cpInstance = new CPelicula();
  }
  return cpInstance;
}

vector<string> CPelicula::obtenerTitulosPeliculas() {
  auto manejadorPelicula = ManejadorPelicula::getInstance();
  auto peliculas = manejadorPelicula->obtenerPeliculas();

  vector<string> tituloPeliculas;
  for (auto posicionMap : peliculas) {
    tituloPeliculas.push_back(posicionMap.second->getTitulo());
  }
  return tituloPeliculas;
}

vector<DtPelicula> CPelicula::obtenerPeliculas() {
  auto manejadorPelicula = ManejadorPelicula::getInstance();
  vector<DtPelicula> dtPeliculas;
  auto peliculas = manejadorPelicula->obtenerPeliculas();

  for (auto posPelicula : peliculas) {
    auto dtPelicula = DtPelicula(posPelicula.second->getTitulo(),
                                 posPelicula.second->getSinopsis(),
                                 posPelicula.second->getPoster(),
                                 posPelicula.second->getPuntajePromedio());
    dtPeliculas.push_back(dtPelicula);
  }
  return dtPeliculas;
}

void CPelicula::eligePelicula(string titulo) {
  auto manejadorPelicula = ManejadorPelicula::getInstance();
  if (manejadorPelicula->existePelicula(titulo)) {
    this->pelicula = manejadorPelicula->obtenerPelicula(titulo);
  } else {
    throw invalid_argument("Opcion incorrecta");
  }
}

DtPelicula CPelicula::mostrarPelicula() {
  auto dtPelicula = DtPelicula(pelicula->getSinopsis(), pelicula->getPoster());
  return dtPelicula;
}

vector<DtCine> CPelicula::verInfoAdicional() {
  return this->pelicula->obtenerCines();
}

void CPelicula::ingresarPuntaje(int puntuacion) {}

void CPelicula::modificarPuntaje(int puntuacion) {}

void CPelicula::creaComentario(string comentario) {}

void CPelicula::eligeComentario(int id) {}

void CPelicula::respondeComentario(string comentario) {}

void CPelicula::finalizar() {}

void CPelicula::eliminarPelicula() {}

void CPelicula::crearReservaDebito(float costo) {
  auto manejadorFuncion = ManejadorFuncion::getInstance();
  auto funcion = manejadorFuncion->obtenerFuncion(this->funcion);
  auto debito = new Debito(costo, this->cantEntradas, this->banco,
                           this->sesion->getUsuario());
  funcion->agregarReserva(debito);
}

void CPelicula::crearReservaCredito(float costo) {
  auto manejadorFuncion = ManejadorFuncion::getInstance();
  auto manejadorFinanciera = ManejadorFinanciera::getInstance();
  auto funcion = manejadorFuncion->obtenerFuncion(this->funcion);
  auto financiera = manejadorFinanciera->obtenerFinanciera(this->financiera);
  auto credito = new Credito(costo, this->cantEntradas,
                             this->sesion->getUsuario(), financiera);
  funcion->agregarReserva(credito);
}

void CPelicula::ingresarBanco(string banco) { this->banco = banco; }

float CPelicula::ingresarFinanciera(string nombreFinanciera) {
  auto manejadorFinanciera = ManejadorFinanciera::getInstance();
  if (manejadorFinanciera->existeFinanciera(nombreFinanciera)) {
    this->financiera = nombreFinanciera;
    auto financiera = manejadorFinanciera->obtenerFinanciera(nombreFinanciera);
    return financiera->getDescuento();
  } else {
    throw invalid_argument("Opcion incorrecta");
  }
}

void CPelicula::ingresaCantEntradas(int cantEntradas) {
  this->cantEntradas = cantEntradas;
}

void CPelicula::crearFuncion(DtFechaHora fecha, DtHorario horario,
                             float precio) {
  auto manejadorFuncion = ManejadorFuncion::getInstance();
  auto funcion = new Funcion(fecha, horario, precio);
  auto cCine = CCine::getInstance();
  cCine->getSala()->agregarFuncion(funcion);
  this->pelicula->agregarFuncion(funcion);
  manejadorFuncion->agregarFuncion(funcion);
  this->pelicula->agregarCine(cCine->getCine());
}

void CPelicula::seleccionaFuncion(int id) { this->funcion = id; }

bool operator>(DtFechaHora funcion, DtFechaHora sistema) {
  if (funcion.getAnio() == sistema.getAnio()) {
    if (funcion.getMes() == sistema.getMes()) {
      if (funcion.getDia() == sistema.getDia()) {
        if (funcion.getHora() == sistema.getHora()) {
          if (funcion.getMinuto() == sistema.getMinuto()) {
            return false;
          } else {
            return funcion.getMinuto() > sistema.getMinuto();
          }
        } else {
          return funcion.getHora() > sistema.getHora();
        }
      } else {
        return funcion.getDia() > sistema.getDia();
      }
    } else {
      return funcion.getMes() > sistema.getMes();
    }
  } else {
    return funcion.getAnio() > sistema.getAnio();
  }
}

vector<DtFuncion> CPelicula::eligeCine(int id) {
  vector<DtFuncion> dtFunciones;
  auto reloj = Reloj::getInstance();
  if (this->pelicula->existeCine(id)) {
    auto cine = this->pelicula->obtenerCine(id);
    auto salas = cine->obtenerSalas();
    for (auto sala : salas) {
      auto funSalas = sala.second->obtenerFunciones();
      for (auto posFuncion : funSalas) {
        if (this->pelicula->existeFuncion(posFuncion->getId())) {
          if (posFuncion->getFecha() > reloj->getFechaHora()) {
            auto dtFuncion =
                DtFuncion(posFuncion->getId(), posFuncion->getPrecio(),
                          posFuncion->getFecha(), posFuncion->getHorario());
            dtFunciones.push_back(dtFuncion);
          }
        }
      }
    }
    return dtFunciones;
  } else {
    throw invalid_argument("Opcion incorrecta");
  }
}

float CPelicula::obtenerPrecioDebito() {
  auto manejadorFuncion = ManejadorFuncion::getInstance();
  auto funcion = manejadorFuncion->obtenerFuncion(this->funcion);
  return funcion->getPrecio() * this->cantEntradas;
}

float CPelicula::obtenerPrecioCredito(float descuento) {
  auto manejadorFuncion = ManejadorFuncion::getInstance();
  auto funcion = manejadorFuncion->obtenerFuncion(this->funcion);
  return funcion->getPrecio() * this->cantEntradas * (descuento / 100);
}

void CPelicula::removerFuncionSala(int id) {}

vector<DtFuncion> CPelicula::obtenerFunciones() {}

DtFuncion CPelicula::obtenerFuncionSala() {}

CPelicula::~CPelicula() {}
