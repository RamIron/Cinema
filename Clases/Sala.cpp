#include "Sala.hh"

int Sala::currentId = 0;

Sala::Sala() { this->id = currentId++; }

Sala::Sala(int capacidad) {
  this->id = currentId++;
  this->capacidad = capacidad;
}

int Sala::getcapacidad() { return this->capacidad; }

void Sala::setCapacidad(int capacidad) { this->capacidad = capacidad; }

Sala::~Sala() {}
