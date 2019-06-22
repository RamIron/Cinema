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

bool ManejadorFuncion::existeFuncion(int idFuncion) {
  auto funcion = this->funciones.find(idFuncion);
  return funcion != this->funciones.end();
}

Funcion *ManejadorFuncion::obtenerFuncion(int idFuncion) {
  auto funcion = this->funciones.find(idFuncion);
  return funcion->second;
}

void ManejadorFuncion::eliminarFuncion(int idFuncion) {
  this->funciones.erase(idFuncion);
}

map<int, Funcion *> ManejadorFuncion::obtenerFunciones() {
  return this->funciones;
}

ManejadorFuncion::~ManejadorFuncion() {}
