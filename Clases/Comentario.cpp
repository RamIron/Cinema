#include "Comentario.hh"
#include "../Handlers/ManejadorComentario.hh"

int Comentario::currentId = 0;

// Constructores
Comentario::Comentario() { this->id = currentId++; }

Comentario::Comentario(string texto, Usuario *usuario) {
  this->id = currentId++;
  this->texto = texto;
  this->u = usuario;
}

// Getters y Setters
int Comentario::getId() { return this->id; }

string Comentario::getTexto() { return this->texto; }

Usuario *Comentario::getUsuario() { return this->u; }

map<int, Comentario *> Comentario::getRespuestas() { return this->respuestas; }

void Comentario::setTexto(string texto) { this->texto = texto; }

void Comentario::setUsuario(Usuario *usuario) { this->u = usuario; }

void Comentario::agregarRespuesta(Comentario *respuesta) {
  this->respuestas.insert(make_pair(respuesta->getId(), respuesta));
}

// Destructor
Comentario::~Comentario() {
  for (auto posComentario : this->respuestas) {
    auto manejadorComentario = ManejadorComentario::getInstance();
    manejadorComentario->eliminarComentario(posComentario.second->getId());
    delete posComentario.second;
  }
  this->respuestas.clear();
}
