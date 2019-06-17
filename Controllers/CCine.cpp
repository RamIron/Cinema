#include "CCine.hh"
#include "../Handlers/ManejadorCine.hh"
#include <DtCine.hh>

CCine *CCine::ccInstance = NULL;

CCine::CCine() {}

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
}

void CCine::cancelar() { this->capacidadSalas.clear(); }

void CCine::ingresaSala(int capacidad) {
  this->capacidadSalas.push_back(capacidad);
}

vector<DtCine> CCine::obtenerCines() {
  auto manejadorCine = ManejadorCine::getInstance();
  vector<DtCine> dtCines;
  auto cines = manejadorCine->obtenerCines();
  for (auto posicionMap : cines) {
    auto dtCine =
        DtCine(posicionMap.second->getId(), posicionMap.second->getDireccion());
    dtCines.push_back(dtCine);
  }
  return dtCines;
}

void CCine::eligeCine(int id) {
  auto manejadorCine = ManejadorCine::getInstance();
  if (manejadorCine->existeCine(id)) {
    // hay que declararlo como atributo en el controlador
    this->cine = manejadorCine->obtenerCine(id);
  } else {
    throw invalid_argument("Opción incorrecta");
  }
}

vector<DtSala> CCine::obtenerDtSalas() { return this->cine->obtenerDtSalas(); }

void CCine::eligeSala(int idSala) {
  if (cine->existeSala(idSala)) {
    sala = cine->obtenerSala(idSala);
  } else {
    throw invalid_argument("Opción incorrecta");
  }
}

CCine::~CCine() {}

Sala *CCine::getSala() const { return sala; }

void CCine::setSala(Sala *sala) { CCine::sala = sala; }

Cine *CCine::getCine() const { return cine; }

void CCine::setCine(Cine *cine) { CCine::cine = cine; }
