#include "Sala.hh"

int Sala::currentId = 0;

Sala::Sala() { this->id = currentId++; }

Sala::Sala(int capacidad) {
  this->id = currentId++;
  this->capacidad = capacidad;
}

int Sala::getCapacidad() { return this->capacidad; }

int Sala::getId() { return this->id; }

void Sala::setCapacidad(int capacidad) { this->capacidad = capacidad; }

void Sala::agregarFuncion(Funcion *funcion) {
  this->funciones.insert(make_pair(funcion->getId(), funcion));
}

vector<Funcion *> Sala::obtenerFunciones() {
  vector<Funcion *> funciones;
  for (auto posFuncion : this->funciones) {
    funciones.push_back(posFuncion.second);
  }
  return funciones;
}

void Sala::eliminarFuncionSala(int idFuncion) {
  this->funciones.erase(idFuncion);
}

Sala::~Sala() {}
