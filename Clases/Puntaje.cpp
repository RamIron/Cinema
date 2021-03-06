#include "Puntaje.hh"

// Constructores
Puntaje::Puntaje() {}

Puntaje::Puntaje(Usuario *u, int puntos) {
  this->u = u;
  this->puntos = puntos;
}

// Getters y Setters
int Puntaje::getPuntos() { return this->puntos; }

Usuario *Puntaje::getUsuario() { return this->u; }

void Puntaje::setPuntos(int puntos) { this->puntos = puntos; }

void Puntaje::setUsuario(Usuario *u) { this->u = u; }

// Destructor
Puntaje::~Puntaje() {}
