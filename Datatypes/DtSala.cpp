#include "DtSala.hh"

DtSala::DtSala() {}

DtSala::DtSala(int id, int capacidad) {
  this->id = id;
  this->capacidad = capacidad;
}

DtSala::DtSala(int id, int capacidad, vector<DtFuncion> dtFunciones) {
  this->id = id;
  this->capacidad = capacidad;
  this->funciones = dtFunciones;
}

int DtSala::getid() { return this->id; }

int DtSala::getCapacidad() { return this->capacidad; }

vector<DtFuncion> DtSala::getFunciones() { return this->funciones; };

// Operador
std::ostream &operator<<(std::ostream &output, DtSala &dtSala) {
  auto funciones = dtSala.getFunciones();
  output << "- Sala " << dtSala.getid() << ":" << std::endl;
  for (int i = 0; i < funciones.size(); i++) {
    output << "\t- Funcion " << funciones[i].getid() << ":" << std::endl
           << "\t- Fecha: " << funciones[i].getFecha().getDia() << "/"
           << funciones[i].getFecha().getMes() << "/"
           << funciones[i].getFecha().getAnio() << std::endl
           << "\t- Hora Inicio: " << funciones[i].getHorario().getHoraInicio()
           << std::endl
           << "\t- Hora Fin: " << funciones[i].getHorario().getHoraFin()
           << std::endl;
  }
  return output;
}

/*Destructor*/
DtSala::~DtSala() {}
