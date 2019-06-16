#include "CCine.hh"

CCine *CCine::ccInstance = NULL;

CCine::CCine() {}

CCine *CCine::getInstance() {
  if (ccInstance == NULL) {
    ccInstance = new CCine();
  }
  return ccInstance;
}

void CCine::ingresaDireccion(DtDireccion direccion) { this->direccion = direccion; }

void CCine::crearCine() {
    Cine *c = new Cine(this->direccion);
    for(auto capacidad : this->capacidadSalas){
        Sala *s = new Sala(capacidad);
        c->mapOfSalas.insert(make_pair(s->getId(), s));
    }
    ManejadorCine *mc = ManejadorCine::getInstance();
    mc.agregarCine(c);
}

void CCine::cancelar() {
    this->capacidadSalas.clear();
}

void CCine::ingresaSala(int capacidad) { this->capacidadSalas.push_back(capacidad); }

CCine::~CCine() {}
