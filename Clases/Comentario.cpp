#include "Comentario.hh"

int Comentario::currentId = 0;

// Constructores
Comentario::Comentario() { this->id = currentId++; }

Comentario::Comentario(string texto) {
  this->id = currentId++;
  this->texto = texto;
}

// Getters y Setters
int Comentario::getId() { return this->id; }
string Comentario::getTexto() { return this->texto; }

void Comentario::setTexto(string texto) { this->texto = texto; }

// Destructor
Comentario::~Comentario() {}
