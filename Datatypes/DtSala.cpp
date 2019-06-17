#include "DtSala.hh"

DtSala::DtSala() {}

DtSala::DtSala(int id, int capacidad) {
  this->id = id;
  this->capacidad = capacidad;
}

int DtSala::getid() { return this->id; }

int DtSala::getCapacidad() { return this->capacidad; }

/*Destructor*/
DtSala::~DtSala() {}
