#include "Pelicula.hh"

// Constructores
Pelicula::Pelicula() {}

Pelicula::Pelicula(string titulo, string sinopsis, float puntajePromedio,
                   string poster) {
  this->titulo = titulo;
  this->sinopsis = sinopsis;
  this->puntajePromedio = puntajePromedio;
  this->poster = poster;
}

// Getters & Setters
string Pelicula::getTitulo() { return this->titulo; }

string Pelicula::getSinopsis() { return this->sinopsis; }

float Pelicula::getPuntajePromedio() { return this->puntajePromedio; }

string Pelicula::getPoster() { return this->poster; }

void Pelicula::setTitulo(string titulo) { this->titulo = titulo; }

void Pelicula::setSinopsis(string sinopsis) { this->sinopsis = sinopsis; }

void Pelicula::setPuntajePromedio(float puntajePromedio) {
  this->puntajePromedio = puntajePromedio;
}

void Pelicula::setPoster(string poster) { this->poster = poster; }

// Destructor
Pelicula::~Pelicula() {}

// Operaciones
float Pelicula::calcularPuntajePromedio() {}

void Pelicula::agregarFuncion(Funcion *funcion) {
  this->funciones.insert(make_pair(funcion->getId(), funcion));
}

void Pelicula::agregarCine(Cine *cine) {
  this->cines.insert(make_pair(cine->getId(), cine));
}

vector<DtCine> Pelicula::obtenerCines() {
  vector<DtCine> dtCines;
  for (auto posCine : cines) {
    DtCine dtCine =
        DtCine(posCine.second->getId(), posCine.second->getDireccion());
    dtCines.push_back(dtCine);
  }
  return dtCines;
}

bool Pelicula::existeCine(int id) { return cines.find(id) != cines.end(); }

DtCine Pelicula::obtenerDtCine(int id) {
  auto cine = cines.find(id);
  DtCine dtcine = DtCine(cine->second->getId(), cine->second->getDireccion());
  return dtcine;
}

Cine *Pelicula::obtenerCine(int id) { return cines.find(id)->second; }

vector<DtComentario> Pelicula::obtenerComentario() {}

vector<DtCine> Pelicula::verInfoAdicional() {}

int Pelicula::obtenerPuntuacion() {}

vector<DtInfoPeli> Pelicula::mostrarInfo() {}

vector<DtFuncion> Pelicula::obtenerDtFunciones() {
  vector<DtFuncion> dtFunciones;
  for (auto posFuncion : funciones) {
    DtFuncion dtFuncion = DtFuncion(
        posFuncion.second->getId(), posFuncion.second->getPrecio(),
        posFuncion.second->getFecha(), posFuncion.second->getHorario());
    dtFunciones.push_back(dtFuncion);
  }
  return dtFunciones;
}

bool Pelicula::existeFuncion(int id) {
  return funciones.find(id) != funciones.end();
}
