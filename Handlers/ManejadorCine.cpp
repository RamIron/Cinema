#include "ManejadorCine.hh"

ManejadorCine *ManejadorCine::mcInstance = NULL;

ManejadorCine::ManejadorCine() {}

ManejadorCine *ManejadorCine::getInstance() {
  if (mcInstance == NULL) {
    mcInstance = new ManejadorCine();
  }
  return mcInstance;
}

void ManejadorCine::agregarCine(Cine *cine) {
  this->cines.insert(make_pair(cine->getId(), cine));
}

bool ManejadorCine::existeCine(int id) {
  map<int, Cine *>::iterator it;
  it = this->cines.find(id);
  return it != this->cines.end();
}

Cine *ManejadorCine::obtenerCine(int id) {
  map<int, Cine *>::iterator it;
  it = this->cines.find(id);
  return it->second;
}

void ManejadorCine::eliminarCine(int id) {
  map<int, Cine *>::iterator it;
  it = this->cines.find(id);
  delete it->second;
  this->cines.erase(id);
}

map<int, Cine *> ManejadorCine::obtenerCines() { return this->cines; }

ManejadorCine::~ManejadorCine() {}
