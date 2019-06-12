#include "Funcion.hh"

int Funcion::currentId = 0;

// Constructores
Funcion::Funcion() { this->id = currentId++; }

Funcion::Funcion(DtFecha fecha, DtHorario horario, float precio) {
  this->id = currentId;
  this->fecha = fecha;
  this->horario = horario;
  this->precio;
}

Funcion::Funcion(DtFecha fecha, DtHorario horario) {
  this->id = currentId;
  this->fecha = fecha;
  this->horario = horario;
}

// Getters y Setters
int Funcion::getID() { return this->id; }

DtFecha Funcion::getFecha() { return this->fecha; }

DtHorario Funcion::getHorario() { return this->horario; }

float Funcion::getPrecio() { return this->precio; }

void Funcion::setFecha(DtFecha fecha) { this->fecha = fecha; }

void Funcion::setHorario(DtHorario horario) { this->horario = horario; }

void Funcion::setPrecio(float precio) { this->precio = precio; }

// Destructor
Funcion::~Funcion() {}
