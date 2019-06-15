#include "Reserva.hh"

Reserva::Reserva() {}

Reserva::Reserva(float costo, int cantEntradas) {
  this->costo = costo;
  this->cantEntradas = cantEntradas;
}

float Reserva::getCosto() { return this->costo; }

int Reserva::getCantEntradas() { return this->cantEntradas; }

void Reserva::setCantEntradas(int cantEntradas) {
  this->cantEntradas = cantEntradas;
}

void Reserva::setCosto(float costo) { this->costo = costo; }

Reserva::~Reserva() {}
