#include "DtCine.hh"

DtCine::DtCine() {}

DtCine::DtCine(int id, DtDireccion direccion) {
  this->id = id;
  this->direccion = direccion;
}

int DtCine::getId() const { return this->id; }

DtDireccion DtCine::getDireccion() const { return this->direccion; }

std::ostream &operator<<(std::ostream &output, vector<DtCine> &dtCines) {
  for (auto dtCine : dtCines) {
    auto direccion = dtCine.getDireccion();
    output << "ID: " << dtCine.getId() << endl
           << "Calle: " << direccion.getCalle() << endl
           << "Numero: " << direccion.getNumero() << endl;
  }
  return output;
}

DtCine::~DtCine() {}
