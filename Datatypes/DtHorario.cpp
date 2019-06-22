#include "DtHorario.hh"

DtHorario::DtHorario() {}

DtHorario::DtHorario(string horaInicio, string horaFin) {
  this->horaInicio = horaInicio;
  this->horaFin = horaFin;
}

string DtHorario::getHoraFin() const { return this->horaFin; }

string DtHorario::getHoraInicio() const { return this->horaInicio; }

DtHorario::~DtHorario() {}
