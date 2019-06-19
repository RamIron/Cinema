#include "DtFuncion.hh"

DtFuncion::DtFuncion() {}

DtFuncion::DtFuncion(int id, float precio, DtFecha fecha,
                     DtHorario horario, DtFechaHora fechaHora) {
  this->id = id;
  this->precio = precio;
  this->fecha = fecha;
  this->horario = horario;
  this->fechaHora = fechaHora;
}

int DtFuncion::getid() { return this->id; }

float DtFuncion::getPrecio() { return this->precio; }

DtFecha DtFuncion::getFecha() { return this->fecha; }

DtHorario DtFuncion::getHorario() { return this->horario; }

DtFechaHora DtFuncion::getFechaHora(){ return this->fechaHora; }

/*Destructor*/
DtFuncion::~DtFuncion() {}
