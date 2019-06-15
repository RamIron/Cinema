#include "CUsuario.hh"

CUsuario *CUsuario::cuInstance = NULL;

CUsuario::CUsuario() {}

CUsuario *CUsuario::getInstance() {
  if (cuInstance == NULL) {
    cuInstance = new CUsuario();
  }
  return cuInstance;
}

void CUsuario::ingresaNick(string nickname) {}

bool CUsuario::ingresaPass(string contrasenia) {}

CUsuario::~CUsuario() {}
