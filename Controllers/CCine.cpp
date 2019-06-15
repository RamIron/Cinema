#include "CCine.hh"

CCine *CCine::ccInstance = NULL;

CCine::CCine() {}

CCine *CCine::getInstance() {
  if (ccInstance == NULL) {
    ccInstance = new CCine();
  }
  return ccInstance;
}

void CCine::ingresaDireccion(DtDireccion direccion) {}

void CCine::crearCine() {}

void CCine::cancelar() {}

void CCine::ingresaSala(int capacidad) {}

CCine::~CCine() {}
