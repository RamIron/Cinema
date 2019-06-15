#ifndef PALAB06_CUSUARIOFACTORY_HH
#define PALAB06_CUSUARIOFACTORY_HH

#include "CUsuario.hh"
#include "IUsuario.hh"

class CUsuarioFactory {
private:
  static CUsuarioFactory *ufInstance;

  CUsuarioFactory();

public:
  static CUsuarioFactory *getInstance();

  IUsuario *getIUsuario();
};

#endif
