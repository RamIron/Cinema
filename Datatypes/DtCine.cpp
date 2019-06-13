#include "DtCine.hh"

DtCine::DtCine() {
  this->numero = "";
  this->capacidad = "";
}

DtCine::DtCine(int numero, int capacidad) {
  this->numero = numero;
  this->capacidad = capacidad;
}

int DtCine::getNumero() { return this->numero; }

int DtCine::getCapacidad() { return this->capacidad; }

DtCine::~DtCine() {}
