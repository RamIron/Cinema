#include "Comentario.hh"

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

void Comentario::setTexto(string texto) { this->texto = texto; }

void Comentario::setUsuario(Usuario *usuario) { this->u = usuario; }

// Destructor
Comentario::~Comentario() {}
