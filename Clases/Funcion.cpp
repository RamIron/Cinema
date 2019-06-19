#include "Funcion.hh"

int Funcion::currentId = 0;

// Constructores
Funcion::Funcion() { this->id = currentId++; }

Funcion::Funcion(DtFecha fecha, DtHorario horario, float precio, DtFechaHora fechaHora) {
  this->id = currentId++;
  this->fecha = fecha;
  this->horario = horario;
  this->precio = precio;
  this->fechaHora = fechaHora;
}

// Getters y Setters
int Funcion::getId() { return this->id; }

DtFecha Funcion::getFecha() { return this->fecha; }

DtHorario Funcion::getHorario() { return this->horario; }

float Funcion::getPrecio() { return this->precio; }

void Funcion::setFecha(DtFecha fecha) { this->fecha = fecha; }

void Funcion::setHorario(DtHorario horario) { this->horario = horario; }

void Funcion::setPrecio(float precio) { this->precio = precio; }

DtFechaHora Funcion::getFechaHora(){ return this->fechaHora; }

void Funcion::setFechaHora(DtFechaHora fechaHora){ this->fechaHora = fechaHora; }

void Funcion::agregarReserva(Reserva *reserva) {
  this->reservas.push_back(reserva);
}

// Destructor
Funcion::~Funcion() {}
