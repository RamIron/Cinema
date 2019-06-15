#include "DtPuntaje.hh"

DtPuntaje::DtPuntaje() {}

DtPuntaje::DtPuntaje(int puntuacion, string nickname) {
  this->puntuacion = puntuacion;
  this->nickname = nickname;
}

string DtPuntaje::getNickname() const { return this->nickname; }

int DtPuntaje::getPuntuacion() const { return this->puntuacion; }

DtPuntaje::~DtPuntaje() {}
