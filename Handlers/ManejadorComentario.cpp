#include "ManejadorComentario.hh"

ManejadorComentario *ManejadorComentario::mcInstance = NULL;

ManejadorComentario::ManejadorComentario() {}

ManejadorComentario *ManejadorComentario::getInstance() {
  if (mcInstance == NULL) {
    mcInstance = new ManejadorComentario();
  }
  return mcInstance;
}

void ManejadorComentario::agregarComentario(Comentario *comentario) {
  this->comentarios.insert(make_pair(comentario->getId(), comentario));
}

bool ManejadorComentario::existeComentario(int id) {
  map<int, Comentario *>::iterator it;
  it = this->comentarios.find(id);
  return it != this->comentarios.end();
}

Comentario *ManejadorComentario::obtenerComentario(int id) {
  map<int, Comentario *>::iterator it;
  it = this->comentarios.find(id);
  return it->second;
}

void ManejadorComentario::eliminarComentario(int id) {
  map<int, Comentario *>::iterator it;
  it = this->comentarios.find(id);
  delete it->second;
  this->comentarios.erase(id);
}

map<int, Comentario *> ManejadorComentario::obtenerComentarios() {
  return this->comentarios;
}

ManejadorComentario::~ManejadorComentario() {}
