#include "Cine.hh"

int Cine::currentId = 0;

//Constructores

Cine::Cine() { this->id = currentId++; }

Cine::Cine(DtDireccion direccion) { this->direccion = direccion; }

//Getters & Setters

DtDireccion Cine::getDireccion() { return this->direccion; }

int Cine::getId() { return this->id; }

void Cine::setDireccion(DtDireccion direccion) { this->direccion = direccion; }

//Operaciones
vector<DtSala *> obtenerSalas(){}

Cine::~Cine() {}
