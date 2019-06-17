#include "DtFechaHora.hh"
#include <ctime>

DtFechaHora::DtFechaHora() {
  time_t tim;
  time(&tim);
  tm *now = localtime(&tim);
  this->anio = now->tm_year + 1900;
  this->mes = now->tm_mon + 1;
  this->dia = now->tm_mday;
  this->hora = now->tm_hour;
  this->minuto = now->tm_min;
}

DtFechaHora::DtFechaHora(int anio, int mes, int dia, int hora, int minuto) {
  this->anio = anio;
  this->mes = mes;
  this->dia = dia;
  this->hora = hora;
  this->minuto = minuto;
}

int DtFechaHora::getAnio() { return this->anio; }

int DtFechaHora::getMes() { return this->mes; }

int DtFechaHora::getDia() { return this->dia; }

int DtFechaHora::getHora() { return this->hora; }

int DtFechaHora::getMinuto() { return this->minuto; }

DtFechaHora::~DtFechaHora() {}
