#include "DtFuncion.hh"
#include "DtFecha.hh"

DtFuncion::DtFuncion() {}

DtFuncion::DtFuncion(int id, float precio, DtFecha fecha, DtHorario horario,
                     DtFechaHora fechaHora) {
  this->id = id;
  this->precio = precio;
  this->fecha = fecha;
  this->horario = horario;
  this->fechaHora = fechaHora;
}

DtFuncion::DtFuncion(int id, DtFecha fecha, DtHorario horario) {
  this->id = id;
  this->fecha = fecha;
  this->horario = horario;
}

int DtFuncion::getId() { return this->id; }

float DtFuncion::getPrecio() { return this->precio; }

DtFecha DtFuncion::getFecha() { return this->fecha; }

DtHorario DtFuncion::getHorario() { return this->horario; }

DtFechaHora DtFuncion::getFechaHora() { return this->fechaHora; }

std::ostream &operator<<(std::ostream &output, vector<DtFuncion> &dtFunciones) {
  for (auto dtFuncion : dtFunciones) {
    auto dtfecha = dtFuncion.getFecha();
    auto dtHorario = dtFuncion.getHorario();
    output << "ID Funcion: " << dtFuncion.getId() << endl
           << "Fecha: " << dtfecha << endl
           << "Horario: " << dtHorario << endl
           << "Precio: " << dtFuncion.getPrecio() << endl
           << endl;
  }
  return output;
}

/*Destructor*/
DtFuncion::~DtFuncion() {}
