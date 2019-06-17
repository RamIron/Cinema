#include "Funcion.hh"

int Funcion::currentId = 0;

// Constructores
Funcion::Funcion() { this->id = currentId++; }

Funcion::Funcion(DtFechaHora fecha, DtHorario horario, float precio) {
  this->id = currentId++;
  this->fecha = fecha;
  this->horario = horario;
  this->precio;
}

// Getters y Setters
int Funcion::getId() { return this->id; }

DtFechaHora Funcion::getFecha() { return this->fecha; }

DtHorario Funcion::getHorario() { return this->horario; }

float Funcion::getPrecio() { return this->precio; }

void Funcion::setFecha(DtFechaHora fecha) { this->fecha = fecha; }

void Funcion::setHorario(DtHorario horario) { this->horario = horario; }

void Funcion::setPrecio(float precio) { this->precio = precio; }

void Funcion::agregarReserva(Reserva *reserva) {
  this->reservas.push_back(reserva);
}

// Destructor
Funcion::~Funcion() {}
