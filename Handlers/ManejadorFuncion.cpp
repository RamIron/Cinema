#include "ManejadorFuncion.hh"

ManejadorFuncion *ManejadorFuncion::mfInstance = NULL;

ManejadorFuncion::ManejadorFuncion() {}

ManejadorFuncion *ManejadorFuncion::getInstance() {
  if (mfInstance == NULL) {
    mfInstance = new ManejadorFuncion();
  }
  return mfInstance;
}

void ManejadorFuncion::agregarFuncion(Funcion *funcion) {
  this->funciones.insert(make_pair(funcion->getId(), funcion));
}

bool ManejadorFuncion::existeFuncion(int id) {
  map<int, Funcion *>::iterator it;
  it = this->funciones.find(id);
  return it == this->funciones.end();
}

Funcion *ManejadorFuncion::obtenerFuncion(int id) {
  map<int, Funcion *>::iterator it;
  it = this->funciones.find(id);
  return it->second;
}

void ManejadorFuncion::eliminarFuncion(int id) {
  map<int, Funcion *>::iterator it;
  it = this->funciones.find(id);
  delete it->second;
  this->funciones.erase(id);
}

map<int, Funcion *> ManejadorFuncion::obtenerFunciones() {
  return this->funciones;
}

ManejadorFuncion::~ManejadorFuncion() {}
