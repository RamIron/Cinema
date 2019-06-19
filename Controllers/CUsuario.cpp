#include "CUsuario.hh"
#include "../Clases/Sesion.hh"
#include "ManejadorUsuario.hh"

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
  auto manejadorUsuario = ManejadorUsuario::getInstance();
  if (manejadorUsuario->existeUsuario(nickname)) {
    auto usuario = manejadorUsuario->obtenerUsuario(this->nickname);
    if (usuario->getConstrasenia().compare(contrasenia) == 0) {
      auto sesion = Sesion::getInstance();
      sesion->setUsuario(usuario);
    }
    return usuario->getConstrasenia().compare(contrasenia) == 0;
  }
}

CUsuario::~CUsuario() {}
