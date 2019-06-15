#include "Sesion.hh"

Sesion *Sesion::sesion = NULL;

Sesion *Sesion::getInstance() {
  if (sesion == NULL) {
    sesion = new Sesion();
  }
  return sesion;
}

Sesion::Sesion() {}

void Sesion::login(string nickname, string contrasenia) {

}

Usuario* Sesion::getUsuario(){
  return this->u;
}

void Sesion::setUsuario(Usuario *u) {
  this->u = u;
}

Sesion::~Sesion() {}
