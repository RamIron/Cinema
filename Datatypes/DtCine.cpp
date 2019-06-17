#include "DtCine.hh"

DtCine::DtCine() {}

DtCine::DtCine(int id, DtDireccion direccion) {
  this->id = id;
  this->direccion = direccion;
}

int DtCine::getId() const { return this->id; }

DtDireccion DtCine::getDireccion() const { return this->direccion; }

DtCine::~DtCine() {}
