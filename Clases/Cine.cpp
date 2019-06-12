#include "Cine.hh"

int Cine::currentId = 0;

Cine::Cine() { this->id = currentId++; }

Cine::Cine(DtDireccion direccion) { this->direccion = direccion; }

DtDireccion Cine::getDireccion() { return this->direccion; }

int Cine::getId() { return this->id; }

void Cine::setDireccion(DtDireccion direccion) { this->direccion = direccion; }

Cine::~Cine() {}
