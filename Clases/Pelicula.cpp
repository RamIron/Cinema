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

vector<DtCine> Pelicula::obtenerCines() {}

DtCine Pelicula::obtenerCine() {}

vector<DtComentario> Pelicula::obtenerComentario() {}

vector<DtCine> Pelicula::verInfoAdicional() {}

int Pelicula::obtenerPuntuacion() {}

vector<DtInfoPeli> Pelicula::mostrarInfo() {}

vector<DtFuncion> Pelicula::obtenerFunciones() {}
