#include "./Debito.hh"
#include "./Reserva.hh"

Debito::Debito(){this->banco = ""}

Debito::Debito(float costo, int cantEntradas, string banco)
    : Reserva(costo, cantEntradas) {
  this->banco = banco;
}

string Debito::getBanco() { return this->banco; }

void Debito::setBanco(string banco) { this->banco = banco; }

Debito::~Debito() {}
