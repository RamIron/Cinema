#include "ManejadorPelicula.hh"

ManejadorPelicula *ManejadorPelicula::mpInstance = NULL;

ManejadorPelicula::ManejadorPelicula() {}

ManejadorPelicula *ManejadorPelicula::getInstance() {
  if (mpInstance == NULL) {
    mpInstance = new ManejadorPelicula();
  }
  return mpInstance;
}

void ManejadorPelicula::agregarPelicula(Pelicula *pelicula) {
  this->peliculas.insert(make_pair(pelicula->getTitulo(), pelicula));
}

bool ManejadorPelicula::existePelicula(string titulo) {
  auto pelicula = this->peliculas.find(titulo);
  return pelicula != this->peliculas.end();
}

Pelicula *ManejadorPelicula::obtenerPelicula(string titulo) {
  auto pelicula = this->peliculas.find(titulo);
  return pelicula->second;
}

void ManejadorPelicula::eliminarPelicula(string titulo) {
  this->peliculas.erase(titulo);
}

map<string, Pelicula *> ManejadorPelicula::obtenerPeliculas() {
  return this->peliculas;
}

ManejadorPelicula::~ManejadorPelicula() {}
