#include "DtHorario.hh"

DtHorario::DtHorario() {}

DtHorario::DtHorario(string horaInicio, string horaFin) {
  this->horaInicio = horaInicio;
  this->horaFin = horaFin;
}

string DtHorario::getHoraFin() const { return this->horaFin; }

string DtHorario::getHoraInicio() const { return this->horaInicio; }

std::ostream &operator<<(std::ostream &output, DtHorario &dtHorario){
  output << dtHorario.getHoraInicio() << " a " << dtHorario.getHoraFin();
  return output;
}

DtHorario::~DtHorario() {}
