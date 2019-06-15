#include "ManejadorPelicula.hh"

ManejadorPelicula *ManejadorPelicula::mpInstance = NULL;

ManejadorPelicula::ManejadorPelicula(){}

ManejadorPelicula *ManejadorPelicula::getInstance() {
  if (mpInstance == NULL) {
    mpInstance = new ManejadorPelicula();
  }
  return mpInstance;
}

void ManejadorPelicula::agregarPelicula(Pelicula * pelicula){
  this->peliculas.insert(make_pair(pelicula->getTitulo(), pelicula));
}

bool ManejadorPelicula::existePelicula(string titulo){
  map<string, Pelicula *>::iterator it;
  it = this->peliculas.find(titulo);
  return it == this->peliculas.end();
}

Pelicula *ManejadorPelicula::obtenerPelicula(string titulo){
  map<string, Pelicula *>::iterator it;
  it = this->peliculas.find(titulo);
  return it->second;
}

void ManejadorPelicula::eliminarPelicula(string titulo){
  map<string, Pelicula *>::iterator it;
  it = this->peliculas.find(titulo);
  delete it->second;
  this->peliculas.erase(titulo);
}

map<string, Pelicula *> ManejadorPelicula::obtenerPeliculas() {
  return this->peliculas;
}

ManejadorPelicula::~ManejadorPelicula(){}
