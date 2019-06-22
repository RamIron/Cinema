#ifndef PALAB06_CUSUARIO_HH
#define PALAB06_CUSUARIO_HH

#include "../Clases/Sesion.hh"
#include "IUsuario.hh"
#include "Usuario.hh"
#include <iostream>

using namespace std;

class CUsuario : public IUsuario {
private:
  static CUsuario *cuInstance;
  string nickname;
  Sesion *sesion = Sesion::getInstance();

  CUsuario();

public:
  void ingresaNick(string nickname);

  bool ingresaPass(string contrasenia);

  bool estaLogeado();

  bool esAdmin();

  static CUsuario *getInstance();

  ~CUsuario();
};

#endif
