#include "Sesion.hh"
#include "../Handlers/ManejadorUsuario.hh"

Sesion *Sesion::instanciaSesion = NULL;

Sesion *Sesion::getInstance() {
  if (instanciaSesion == NULL) {
    instanciaSesion = new Sesion();
  }
  return instanciaSesion;
}

Sesion::Sesion() {}

Usuario *Sesion::getUsuario() { return this->u; }

void Sesion::setUsuario(Usuario *usuario) { this->u = usuario; }

Sesion::~Sesion() {}
