#include "CPelicula.hh"

CPelicula *CPelicula::cpInstance = NULL;

CPelicula::CPelicula() {}

CPelicula *CPelicula::getInstance() {
  if (cpInstance == NULL) {
    cpInstance = new CPelicula();
  }
  return cpInstance;
}

vector<string> CPelicula::obtenerTitulosPeliculas() {}

vector<DtPelicula> CPelicula::obtenerPeliculas() {}

void CPelicula::eligePelicula(string titulo) {}

DtPelicula CPelicula::mostrarPelicula() // Retorna la pelicula de eligePelicula()
{}

void CPelicula::ingresarPuntaje(int puntuacion) {}

void CPelicula::modificarPuntaje(int puntuacion) {}

void CPelicula::creaComentario(string comentario) {}

void CPelicula::eligeComentario(int id) {}

void CPelicula::respondeComentario(string comentario) {}

void CPelicula::finalizar() {}

void CPelicula::eliminarPelicula() {}

void CPelicula::cancelarReserva() {}

void CPelicula::crearReserva() {}

void CPelicula::ingresarBanco(string banco) {}

float CPelicula::ingresarFinanciera(string financiera) {}

void CPelicula::ingresaCantEntradas(int cantEntradas) {}

void CPelicula::crearFuncion(DtFecha fecha, DtHorario horario) {}

void CPelicula::seleccionaFuncion(int id) {}

void CPelicula::eligeCine(int numero) {}

float CPelicula::obtenerPrecio() {}

void CPelicula::removerFuncionSala(int id) {}

vector<DtFuncion> CPelicula::obtenerFunciones() {}

DtFuncion CPelicula::obtenerFuncionSala() {}

CPelicula::~CPelicula() {}
