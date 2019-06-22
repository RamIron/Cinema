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

bool ManejadorCine::existeCine(int idCine) {
  auto cine = this->cines.find(idCine);
  return cine != this->cines.end();
}

Cine *ManejadorCine::obtenerCine(int idCine) {
  auto cine = this->cines.find(idCine);
  return cine->second;
}

void ManejadorCine::eliminarCine(int idCine) { this->cines.erase(idCine); }

map<int, Cine *> ManejadorCine::obtenerCines() { return this->cines; }

ManejadorCine::~ManejadorCine() {}
