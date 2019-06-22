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
  auto usuario = this->usuarios.find(nickname);
  return usuario != this->usuarios.end();
}

Usuario *ManejadorUsuario::obtenerUsuario(string nickname) {
  auto usuario = this->usuarios.find(nickname);
  return usuario->second;
}

void ManejadorUsuario::eliminarUsuario(string nickname) {
  this->usuarios.erase(nickname);
}

map<string, Usuario *> ManejadorUsuario::obtenerUsuarios() {
  return this->usuarios;
}

ManejadorUsuario::~ManejadorUsuario() {}
