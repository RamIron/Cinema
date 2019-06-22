#include "Cine.hh"

int Cine::currentId = 0;

// Constructores

Cine::Cine() { this->id = currentId++; }

Cine::Cine(DtDireccion direccion) {
  this->id = currentId++;
  this->direccion = direccion;
}

// Getters & Setters

DtDireccion Cine::getDireccion() { return this->direccion; }

int Cine::getId() { return this->id; }

void Cine::setDireccion(DtDireccion direccion) { this->direccion = direccion; }

// Operaciones
vector<DtSala> Cine::obtenerDtSalas() {
  vector<DtSala> dtSalas;

  for (auto posSala : this->salas) {
    vector<DtFuncion> dtFunciones;
    for (auto posFuncion : posSala.second->obtenerFunciones()) {
      auto dtFuncion = DtFuncion(posFuncion->getId(), posFuncion->getFecha(),
                                 posFuncion->getHorario());
      dtFunciones.push_back(dtFuncion);
    }
    auto dtSala = DtSala(posSala.second->getId(),
                         posSala.second->getCapacidad(), dtFunciones);
    dtSalas.push_back(dtSala);
  }
  return dtSalas;
}

map<int, Sala *> Cine::obtenerSalas() { return this->salas; }

void Cine::agregarSala(Sala *sala) {
  this->salas.insert(make_pair(sala->getId(), sala));
}

bool Cine::existeSala(int idSala) {
  return this->salas.find(idSala) != this->salas.end();
}

Sala *Cine::obtenerSala(int idSala) { return this->salas.find(idSala)->second; }

void Cine::eliminarFuncionCine(int idFuncion) {
  for (auto posSalas : this->salas) {
    posSalas.second->eliminarFuncionSala(idFuncion);
  }
}

Cine::~Cine() {}
