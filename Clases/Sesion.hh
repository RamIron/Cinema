#ifndef PALAB06_SESION_HH
#define PALAB06_SESION_HH

#include "Usuario.hh"
#include <iostream>

using namespace std;

class Sesion {
private:
  static Sesion *instanciaSesion;
  Usuario *u;
  Sesion();

public:
  static Sesion *getInstance();

  Usuario *getUsuario();

  void setUsuario(Usuario *usuario);

  ~Sesion();
};

#endif
