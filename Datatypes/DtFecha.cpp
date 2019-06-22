#include "DtFecha.hh"
#include <ctime>

DtFecha::DtFecha() {
  time_t now = time(0);
  tm *localTime = localtime(&now);
  this->dia = localTime->tm_mday;
  this->mes = localTime->tm_mon + 1;
  this->anio = localTime->tm_year + 1900;
}

DtFecha::DtFecha(int dia, int mes, int anio) {
  this->dia = dia;
  this->mes = mes;
  this->anio = anio;
}

int DtFecha::getDia() const { return this->dia; }

int DtFecha::getMes() const { return this->mes; }

int DtFecha::getAnio() const { return this->anio; }

std::ostream &operator<<(std::ostream &output, DtFecha &dtFecha){
  output << dtFecha.getDia() << "/" << dtFecha.getMes() << "/" << dtFecha.getAnio();
}

DtFecha::~DtFecha() {}