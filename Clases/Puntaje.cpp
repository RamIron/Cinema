#include "Puntaje.hh"

// Constructores
Puntaje::Puntaje() {}

Puntaje::Puntaje(Usuario *u, int puntos) {
  this->u = u;
  this->puntos = puntos;
}

// Getters y Setters
int Puntaje::getPuntos() { return this->puntos; }

void Puntaje::setPuntos(int puntos) { this->puntos = puntos; }

Usuario *Puntaje::getUsuario() { return this->u; }

void Puntaje::setUsuario(Usuario *u) { this->u = u; }

// Destructor
Puntaje::~Puntaje() {}
