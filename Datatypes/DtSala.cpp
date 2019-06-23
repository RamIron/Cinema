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

int DtSala::getid() const { return this->id; }

int DtSala::getCapacidad() const { return this->capacidad; }

vector<DtFuncion> DtSala::getFunciones() { return this->funciones; };

// Operador
std::ostream &operator<<(std::ostream &output, DtSala &dtSala) {
  auto funciones = dtSala.getFunciones();
  output << "- Sala " << dtSala.getid() << ":" << std::endl
         << "\t Cantidad de Asientos: " << dtSala.getCapacidad() << endl;
  if (funciones.size() > 0) {
    output << "\t- Ocupada:" << std::endl;
  } else {
    output << "\t- Libre" << std::endl;
  }
  for (unsigned int i = 0; i < funciones.size(); i++) {
    output << "\t- El " << funciones[i].getFecha().getDia() << "/"
           << funciones[i].getFecha().getMes() << "/"
           << funciones[i].getFecha().getAnio() << " de "
           << funciones[i].getHorario().getHoraInicio() << " a "
           << funciones[i].getHorario().getHoraFin() << std::endl << std::endl;
  }
  return output;
}

/*Destructor*/
DtSala::~DtSala() {}
