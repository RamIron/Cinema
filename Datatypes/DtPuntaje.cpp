#include "DtPuntaje.hh"

DtPuntaje::DtPuntaje() {}

DtPuntaje::DtPuntaje(int puntuacion, string nickname) {
  this->puntuacion = puntuacion;
  this->nickname = nickname;
}

string DtPuntaje::getNickname() const { return this->nickname; }

int DtPuntaje::getPuntuacion() const { return this->puntuacion; }

std::ostream &operator<<(std::ostream &output, DtPuntaje &dtPuntaje) {
  output << dtPuntaje.getNickname() << ":" << dtPuntaje.getPuntuacion()
         << std::endl;
  return output;
}

DtPuntaje::~DtPuntaje() {}
