#include "Reserva.hh"

Reserva::Reserva() {}

Reserva::Reserva(float costo, int cantEntradas, Usuario *usuario) {
  this->costo = costo;
  this->cantEntradas = cantEntradas;
  this->u = usuario;
}

float Reserva::getCosto() { return this->costo; }

int Reserva::getCantEntradas() { return this->cantEntradas; }

Usuario *Reserva::getUsuario() { return this->u; }

void Reserva::setCantEntradas(int cantEntradas) {
  this->cantEntradas = cantEntradas;
}

void Reserva::setCosto(float costo) { this->costo = costo; }

void Reserva::setUsuario(Usuario *usuario) { this->u = usuario; }

Reserva::~Reserva() {}
