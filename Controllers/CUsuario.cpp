#include "CUsuario.hh"

CUsuario *CUsuario::cuInstance = NULL;

CUsuario::CUsuario() {}

CUsuario *CUsuario::getInstance() {
  if (cuInstance == NULL) {
    cuInstance = new CUsuario();
  }
  return cuInstance;
}

void CUsuario::ingresaNick(string nickname) { this->nickname = nickname; }

bool CUsuario::ingresaPass(string contrasenia) {
    ManejadorUsuario *mu = ManejadorUsuario::getInstance();
    if(mu.existeUsuario(this->nickname)){
        Usuario *u = mu.obtenerUsuario(this->nickname);
        return strcmp(u.getConstrasenia(), contrasenia) == 0;
    }
}

CUsuario::~CUsuario() {}
