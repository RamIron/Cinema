#include "DtPelicula.hh"

DtPelicula::DtPelicula() {}

DtPelicula::DtPelicula(string titulo, string sinopsis, string poster,
                       float puntajePromedio) {
  this->titulo = titulo;
  this->sinopsis = sinopsis;
  this->poster = poster;
  this->puntajePromedio = puntajePromedio;
}

DtPelicula::DtPelicula(string sinopsis, string poster) {
  this->sinopsis = sinopsis;
  this->poster = poster;
}

string DtPelicula::getTitulo() const { return this->titulo; }

string DtPelicula::getSinopsis() const { return this->sinopsis; }

string DtPelicula::getPoster() const { return this->poster; }

float DtPelicula::getPuntajePromedio() const { return this->puntajePromedio; }

DtPelicula::~DtPelicula() {}
