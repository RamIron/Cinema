#include "Credito.hh"
#include "Reserva.hh"

Credito::Credito() {}

Credito::Credito(float costo, int cantEntradas, Usuario *u,
                 Financiera *financiera)
    : Reserva(costo, cantEntradas, u) {
  this->financiera = financiera;
}

Financiera *Credito::getFinanciera() { return this->financiera; }

void Credito::setFinanciera(Financiera *financiera) {
  this->financiera = financiera;
}

Credito::~Credito() {}
