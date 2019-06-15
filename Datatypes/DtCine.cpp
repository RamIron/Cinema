#include "DtCine.hh"

DtCine::DtCine() {}

DtCine::DtCine(int numero, DtDireccion direccion) {
  this->numero = numero;
  this->direccion = direccion;
}

int DtCine::getNumero() const { return this->numero; }

DtDireccion DtCine::getDireccion() const { return this->direccion; }

DtCine::~DtCine() {}
