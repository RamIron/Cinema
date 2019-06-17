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
  for (auto posicionMap : mapOfSalas) {
    auto dtSala =
        DtSala(posicionMap.second->getId(), posicionMap.second->getCapacidad());
    dtSalas.push_back(dtSala);
  }
  return dtSalas;
}

map<int, Sala *> Cine::obtenerSalas() { return this->mapOfSalas; }

void Cine::agregarSala(Sala *sala) {
  this->mapOfSalas.insert(make_pair(sala->getId(), sala));
}

bool Cine::existeSala(int idSala) {
  return mapOfSalas.find(idSala) != mapOfSalas.end();
}

Sala *Cine::obtenerSala(int idSala) { return mapOfSalas.find(idSala)->second; }

Cine::~Cine() {}
