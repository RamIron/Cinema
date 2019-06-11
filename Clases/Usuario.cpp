#include "./Usuario.hh"

Usuario::Usuario() {
  this->nickname = "";
  this->contrasenia = "";
  this->foto = "";
}

Usuario::Usuario(string nickname, string contrasenia, string foto,
                 bool esAdmin) {
  this->nickname = nickname;
  this->contrasenia = contrasenia;
  this->foto = foto;
  this->esAdmin = esAdmin;
}

string Usuario::getNickname() { return this->nickname; }

string Usuario::getConstrasenia() { return this->contrasenia; }

string Usuario::getFoto() { return this->foto; }

bool Usuario::isAdmin() { return this->esAdmin; }

void Usuario::setNickname(string nickname) { this->nickname = nickname; }

void Usuario::setContrasenia(string contrasenia) {
  this->contrasenia = contrasenia;
}

void Usuario::setFoto(string foto) { this->foto = foto; }

void Usuario::setAdmin(bool esAdmin) { this->esAdmin = esAdmin; }

Usuario::~Usuario() {}
