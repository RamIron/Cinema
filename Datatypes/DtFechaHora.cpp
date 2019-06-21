#include "DtFechaHora.hh"
#include <ctime>
#include <vector>

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

DtFechaHora::DtFechaHora(DtFecha fecha, DtHorario horario) {
  string delimiter = ":";
  string fechaInicio = horario.getHoraInicio();
  auto posHoraInicio = fechaInicio.find(delimiter);
  string horaInicio = fechaInicio.substr(0, posHoraInicio);
  string minInicio = fechaInicio.substr(posHoraInicio + 1, sizeof(fechaInicio));
  this->anio = fecha.getAnio();
  this->mes = fecha.getMes();
  this->dia = fecha.getDia();
  this->hora = stoi(horaInicio);
  this->minuto = stoi(minInicio);
}

int DtFechaHora::getAnio() { return this->anio; }

int DtFechaHora::getMes() { return this->mes; }

int DtFechaHora::getDia() { return this->dia; }

int DtFechaHora::getHora() { return this->hora; }

int DtFechaHora::getMinuto() { return this->minuto; }

DtFechaHora::~DtFechaHora() {}
