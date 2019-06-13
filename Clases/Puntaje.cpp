#include "Puntaje.hh"

// Constructores
Puntaje::Puntaje() {}

Puntaje::Puntaje(int puntos) {
  this->puntos = puntos;
}

// Getters y Setters
int Puntaje::getPuntos() { return this->puntos; }

void Puntaje::setPuntos(int puntos) { this->puntos = puntos; }

// Destructor
Puntaje::~Puntaje() {}
