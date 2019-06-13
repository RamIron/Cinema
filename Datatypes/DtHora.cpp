#include "DtHora.hh"
#include <ctime>

DtHora::DtHora() {
  time_t now = time(0);
  tm *localTime = localtime(&now);
  this->hora = localTime->tm_hour;
  this->minuto = localTime->tm_min;
  this->segundo = localTime->tm_sec;
}

DtHora::DtHora(int hora, int minuto, int segundo) {
  this->hora = hora;
  this->minuto = minuto;
  this->segundo = segundo;
}

int DtHora::getHora() { return this->hora; }

int DtHora::getMinuto() { return this->minuto; }

int DtHora::getSegundo() { return this->segundo; }

DtHora::~DtHora() {}
