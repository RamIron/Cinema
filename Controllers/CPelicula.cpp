#include "CPelicula.hh"
#include "../Clases/Credito.hh"
#include "../Clases/Debito.hh"
#include "../Clases/Reloj.hh"
#include "../Clases/Reserva.hh"
#include "../Handlers/ManejadorComentario.hh"
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
    throw invalid_argument("No existe una pelicula con ese titulo");
  }
}

DtPelicula CPelicula::mostrarPelicula() {
  auto dtPelicula = DtPelicula(pelicula->getSinopsis(), pelicula->getPoster());
  return dtPelicula;
}

vector<DtCine> CPelicula::verInfoAdicional() {
  return this->pelicula->obtenerDtCines();
}

void CPelicula::ingresarPuntaje(int puntuacion) {
  auto puntaje = new Puntaje(sesion->getUsuario(), puntuacion);
  pelicula->agregarPuntaje(puntaje);
}

void CPelicula::eligeComentario(int idComentario) {
  this->idComentario = idComentario;
}

void CPelicula::eliminarPelicula() {
  this->mp->eliminarPelicula(this->pelicula->getTitulo());
  delete this->pelicula;
}

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
    throw invalid_argument("No existe una financiera con ese nombre");
  }
}

void CPelicula::ingresaCantEntradas(int cantEntradas) {
  this->cantEntradas = cantEntradas;
}

void CPelicula::crearFuncion(DtFecha fecha, DtHorario horario, float precio) {
  auto manejadorFuncion = ManejadorFuncion::getInstance();
  auto dtFechaHora = DtFechaHora(fecha, horario);
  auto funcion = new Funcion(fecha, horario, precio, dtFechaHora);
  auto cCine = CCine::getInstance();
  cCine->getSala()->agregarFuncion(funcion);
  this->pelicula->agregarFuncion(funcion);
  manejadorFuncion->agregarFuncion(funcion);
  this->pelicula->agregarCine(cCine->getCine());
}

void CPelicula::seleccionaFuncion(int idFuncion) { this->funcion = idFuncion; }

vector<DtFuncion> CPelicula::eligeCine(int idCine) {
  vector<DtFuncion> dtFunciones;
  auto reloj = Reloj::getInstance();
  if (this->pelicula->existeCine(idCine)) {
    auto cine = this->pelicula->obtenerCine(idCine);
    auto salas = cine->obtenerSalas();
    for (auto posSala : salas) {
      auto funSala = posSala.second->obtenerFunciones();
      if (!funSala.empty()) {
        for (auto posFuncion : funSala) {
          if (this->pelicula->existeFuncion(posFuncion->getId())) {
            if (posFuncion->getFechaHora() > reloj->getFechaHora()) {
              auto dtFuncion =
                  DtFuncion(posFuncion->getId(), posFuncion->getPrecio(),
                            posFuncion->getFecha(), posFuncion->getHorario(),
                            posFuncion->getFechaHora());
              dtFunciones.push_back(dtFuncion);
            }
          }
        }
      }
    }
    return dtFunciones;
  } else {
    throw invalid_argument("Ese cine no pasa esa pelicula");
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
  return ((funcion->getPrecio() * this->cantEntradas) - (funcion->getPrecio() * this->cantEntradas) * (descuento / 100));
}

bool CPelicula::existePuntaje() {
  return this->pelicula->existePuntajeUsuario(
      this->sesion->getUsuario()->getNickname());
}

int CPelicula::mostrarPuntaje() {
  auto puntaje =
      this->pelicula->obtenerPuntaje(this->sesion->getUsuario()->getNickname());
  return puntaje->getPuntos();
}

void CPelicula::modificarPuntajePelicula(int puntajeNuevo) {
  this->pelicula->modificarPuntaje(puntajeNuevo,
                                   this->sesion->getUsuario()->getNickname());
}

void CPelicula::agregarComentarioPelicula(string comentario) {
  this->pelicula->agregarComentario(comentario, this->sesion->getUsuario());
}

map<int, Comentario *> CPelicula::obtenerComentariosPelicula() {
  return this->pelicula->obtenerComentarios();
}

void CPelicula::obtenerDtComentariosPelicula(
    map<int, Comentario *> comentarios, vector<DtComentario> &dtComentarios,
    int profundidad) {
  dtComentarios.clear();
  this->pelicula->obtenerDtComentarios(comentarios, dtComentarios, profundidad);
}

void CPelicula::respondeComentarioPelicula(string respuesta) {
  this->pelicula->respondeComentario(this->idComentario, respuesta,
                                     this->sesion->getUsuario());
}

DtInfoPeli CPelicula::crearDtInfoPeli() {
  vector<DtComentario> dtComentarios;
  this->pelicula->obtenerDtComentarios(this->pelicula->obtenerComentarios(),
                                       dtComentarios, 0);
  auto dtPuntajes = this->pelicula->obtenerDtPuntajes();
  auto dtInfoPelicula = DtInfoPeli(
      this->pelicula->getTitulo(), this->pelicula->getPuntajePromedio(),
      (int)dtPuntajes.size(), dtComentarios, dtPuntajes);
  return dtInfoPelicula;
}

ManejadorFinanciera *CPelicula::obtenerManejadorFinanciera() {
  return this->mf;
}

ManejadorPelicula *CPelicula::obtenerManejadorPelicula() { return this->mp; }

CPelicula::~CPelicula() {}
