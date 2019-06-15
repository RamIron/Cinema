#include "Sesion.hh"

Sesion *Sesion::sesion = NULL;

Sesion *Sesion::getInstance() {
  if (sesion == NULL) {
    sesion = new Sesion();
  }
  return sesion;
}

Sesion::Sesion() {}

void Sesion::login(string nickname, string contrasenia) {}

Sesion::~Sesion() {}
