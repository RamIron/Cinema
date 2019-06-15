#include "CUsuarioFactory.hh"

CUsuarioFactory *CUsuarioFactory::ufInstance = NULL;

CUsuarioFactory::CUsuarioFactory() {}

CUsuarioFactory *CUsuarioFactory::getInstance() {
  if (ufInstance == NULL)
    ufInstance = new CUsuarioFactory();
  return ufInstance;
}

IUsuario *CUsuarioFactory::getIUsuario() {
  IUsuario *cont = CUsuario::getInstance();
  return cont;
}
