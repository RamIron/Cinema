#include "Sesion.hh"
#include "ManejadorUsuario.hh"

Sesion *Sesion::sesion = NULL;

Sesion *Sesion::getInstance() {
  if (sesion == NULL) {
    sesion = new Sesion();
  }
  return sesion;
}

Sesion::Sesion() {}

Usuario *Sesion::getUsuario() { return this->u; }

void Sesion::setUsuario(Usuario *u) { this->u = u; }

Sesion::~Sesion() {}
