#ifndef PALAB06_SESION_HH
#define PALAB06_SESION_HH

#include "Usuario.hh"
#include <iostream>

using namespace std;

class Comentario {
private:
  static Sesion *sesion;
  Usuario *u;
  Sesion();

public:

  static Sesion* getInstance();

  void login(string, string);
};

#endif
