#include "Credito.hh"
#include "Reserva.hh"

Credito::Credito() {}

Credito::Credito(float costo, int cantEntradas, Usuario *usuario,
                 Financiera *financiera)
    : Reserva(costo, cantEntradas, usuario) {
  this->financiera = financiera;
}

Financiera *Credito::getFinanciera() { return this->financiera; }

void Credito::setFinanciera(Financiera *financiera) {
  this->financiera = financiera;
}

Credito::~Credito() {}
