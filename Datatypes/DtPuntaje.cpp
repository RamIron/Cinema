#include "DtPuntaje.hh"

DtPuntaje::DtPuntaje() {
  this->id = "";
  this->nickname = "";
}

DtPuntaje::DtPuntaje(int id, string nickname) {
  this->id = id;
  this->nickname = nickname;
}

int DtPuntaje::getId() { return this->id; }

string DtPuntaje::getNickname() { return this->nickname; }

DtPuntaje::~DtPuntaje() {}
