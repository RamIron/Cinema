#include "Reserva.hh"

Reserva::Reserva() {
  this->costo = "";
  this->cantEntradas = "";
}

Reserva::Reserva(float costo, int cantEntradas) {
  this->costo = costo;
  this->cantEntradas = cantEntradas;
  }

string Reserva::getCosto() { return this->costo; }

int Reserva::getCantEntradas() { return this->cantEntradas; }

void Reserva::setNickname(float costo) { this->costo = costo; }

void Reserva::setCantEntradas(int cantEntradas) {
    this->cantEntradas = cantEntradas;
  }

Reserva::~Reserva() {}
