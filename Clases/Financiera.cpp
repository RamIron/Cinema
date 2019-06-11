#include "./Financiera.hh"

Financiera::Financiera() {
  this->nombre = "";
  this->descuento = "";
}

Financiera::Financiera(string nombre, float descuento) {
  this->nombre = nombre;
  this->descuento = descuento;
}

string Financiera::getNombre() { return this->nombre; }

float Financiera::getDescuento() { return this->descuento; }

void Financiera::setNombre(string nombre) { this->nombre = nombre; }

void Financiera::setDescuento(string descuento) { this->descuento = descuento; }

Financiera::~Financiera() {}
