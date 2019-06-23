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

std::ostream &operator<<(std::ostream &output,
                         vector<DtPelicula> &dtPeliculas) {
  for (auto dtPelicula : dtPeliculas) {
    output << "Titulo: " << dtPelicula.getTitulo() << endl
           << "Poster: " << dtPelicula.getPoster() << endl
           << "Sinopsis: " << dtPelicula.getSinopsis() << endl
           << "Puntaje Promedio: " << dtPelicula.getPuntajePromedio() << endl
           << endl;
  }
  return output;
}

std::ostream &operator<<(std::ostream &output, DtPelicula &dtPelicula) {
  output << "Poster: " << dtPelicula.getPoster() << endl
         << "Sinopsis: " << dtPelicula.getSinopsis() << endl << endl;
  return output;
}

DtPelicula::~DtPelicula() {}
