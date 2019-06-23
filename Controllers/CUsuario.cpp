#include "CUsuario.hh"
#include "../Handlers/ManejadorUsuario.hh"

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
      this->sesion->setUsuario(usuario);
    }
    return usuario->getConstrasenia().compare(contrasenia) == 0;
  } else {
    throw invalid_argument("No existe un usuario con ese nickname");
  }
}

bool CUsuario::estaLogeado() { return this->sesion->getUsuario() != NULL; }

bool CUsuario::esAdmin() { return this->sesion->getUsuario()->isAdmin(); }

bool CUsuario::setHoraReloj(DtFechaHora fechaHora) {
  this->reloj->activarManual(fechaHora);
}

ManejadorUsuario *CUsuario::obtenerManejadorUsuario() { return this->mu; }

CUsuario::~CUsuario() {}
