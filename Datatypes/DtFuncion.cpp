#include "DtFuncion.hh"

DtFuncion::DtFuncion() {}

DtFuncion::DtFuncion(int id, float precio, DtFechaHora fecha,
                     DtHorario horario) {
  this->id = id;
  this->precio = precio;
  this->fecha = fecha;
  this->horario = horario;
}

int DtFuncion::getid() { return this->id; }

float DtFuncion::getPrecio() { return this->precio; }

DtFechaHora DtFuncion::getFecha() { return this->fecha; }

DtHorario DtFuncion::getHorario() { return this->horario; }

/*Destructor*/
DtFuncion::~DtFuncion() {}
