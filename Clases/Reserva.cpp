#include "Reserva.hh"

Reserva::Reserva() {}

Reserva::Reserva(float costo, int cantEntradas, Usuario *u) {
  this->costo = costo;
  this->cantEntradas = cantEntradas;
  this->u = u;
}

float Reserva::getCosto() { return this->costo; }

int Reserva::getCantEntradas() { return this->cantEntradas; }

void Reserva::setCantEntradas(int cantEntradas) {
  this->cantEntradas = cantEntradas;
}

void Reserva::setCosto(float costo) { this->costo = costo; }

void Reserva::setUsuario(Usuario *u) { this->u = u; }

Usuario *Reserva::getUsuario() { return this->u; }

Reserva::~Reserva() {}
