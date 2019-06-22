#include "./Debito.hh"
#include "./Reserva.hh"

Debito::Debito() {}

Debito::Debito(float costo, int cantEntradas, string banco, Usuario *usuario)
    : Reserva(costo, cantEntradas, usuario) {
  this->banco = banco;
}

string Debito::getBanco() { return this->banco; }

void Debito::setBanco(string banco) { this->banco = banco; }

Debito::~Debito() {}
