#include "DtHora.hh"
#include <ctime>

DtHora::DtHora() {
  time_t now = time(0);
  tm *localTime = localtime(&now);
  this->hora = localTime->tm_hour;
  this->minuto = localTime->tm_min;
}

DtHora::DtHora(int hora, int minuto) {
  this->hora = hora;
  this->minuto = minuto;
}

int DtHora::getHora() { return this->hora; }

int DtHora::getMinuto() { return this->minuto; }

DtHora::~DtHora() {}
