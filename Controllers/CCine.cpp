#include "CCine.hh"
#include "../Handlers/ManejadorCine.hh"
#include <DtCine.hh>

CCine *CCine::ccInstance = NULL;

CCine::CCine() {}

Sala *CCine::getSala() { return this->sala; }

void CCine::setSala(Sala *sala) { this->sala = sala; }

Cine *CCine::getCine() { return this->cine; }

void CCine::setCine(Cine *cine) { this->cine = cine; }

CCine *CCine::getInstance() {
  if (ccInstance == NULL) {
    ccInstance = new CCine();
  }
  return ccInstance;
}

void CCine::ingresaDireccion(DtDireccion direccion) {
  this->direccion = direccion;
}

void CCine::crearCine() {
  auto cine = new Cine(this->direccion);
  for (auto capacidad : this->capacidadSalas) {
    auto sala = new Sala(capacidad);
    cine->agregarSala(sala);
  }
  auto manejadorCine = ManejadorCine::getInstance();
  manejadorCine->agregarCine(cine);
  this->capacidadSalas.clear();
}

void CCine::cancelar() { this->capacidadSalas.clear(); }

void CCine::ingresaSala(int capacidad) {
  this->capacidadSalas.push_back(capacidad);
}

vector<DtCine> CCine::obtenerCines() {
  auto manejadorCine = ManejadorCine::getInstance();
  vector<DtCine> dtCines;
  auto cines = manejadorCine->obtenerCines();
  for (auto posCine : cines) {
    auto dtCine =
        DtCine(posCine.second->getId(), posCine.second->getDireccion());
    dtCines.push_back(dtCine);
  }
  return dtCines;
}

void CCine::eligeCine(int idCine) {
  auto manejadorCine = ManejadorCine::getInstance();
  if (manejadorCine->existeCine(idCine)) {
    this->cine = manejadorCine->obtenerCine(idCine);
  } else {
    throw invalid_argument("Ese cine no existe");
  }
}

vector<DtSala> CCine::obtenerDtSalas() { return this->cine->obtenerDtSalas(); }

void CCine::eligeSala(int idSala) {
  if (cine->existeSala(idSala)) {
    sala = cine->obtenerSala(idSala);
  } else {
    throw invalid_argument("Esa sala no existe");
  }
}

CCine::~CCine() {}
