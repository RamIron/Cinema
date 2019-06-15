#include "ManejadorUsuario.hh"

ManejadorUsuario *ManejadorUsuario::muInstance = NULL;

ManejadorUsuario::ManejadorUsuario() {}

ManejadorUsuario *ManejadorUsuario::getInstance() {
  if (muInstance == NULL) {
    muInstance = new ManejadorUsuario();
  }
  return muInstance;
}

void ManejadorUsuario::agregarUsuario(Usuario *usuario) {
  this->usuarios.insert(make_pair(usuario->getNickname(), usuario));
}

bool ManejadorUsuario::existeUsuario(string nickname) {
  map<string, Usuario *>::iterator it;
  it = this->usuarios.find(nickname);
  return it == this->usuarios.end();
}

Usuario *ManejadorUsuario::obtenerUsuario(string nickname) {
  map<string, Usuario *>::iterator it;
  it = this->usuarios.find(nickname);
  return it->second;
}

void ManejadorUsuario::eliminarUsuario(string nickname) {
  map<string, Usuario *>::iterator it;
  it = this->usuarios.find(nickname);
  delete it->second;
  this->usuarios.erase(nickname);
}

map<string, Usuario *> ManejadorUsuario::obtenerUsuarios() {
  return this->usuarios;
}

ManejadorUsuario::~ManejadorUsuario() {}
