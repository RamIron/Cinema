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

bool ManejadorComentario::existeComentario(int idComentario) {
  auto comentario = this->comentarios.find(idComentario);
  return comentario != this->comentarios.end();
}

Comentario *ManejadorComentario::obtenerComentario(int idComentario) {
  auto comentario = this->comentarios.find(idComentario);
  return comentario->second;
}

void ManejadorComentario::eliminarComentario(int idComentario) {
  this->comentarios.erase(idComentario);
}

map<int, Comentario *> ManejadorComentario::obtenerComentarios() {
  return this->comentarios;
}

ManejadorComentario::~ManejadorComentario() {}
