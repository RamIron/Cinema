#ifndef PALAB06_IUSUARIO_HH
#define PALAB06_IUSUARIO_HH

#include <iostream>

using namespace std;

class IUsuario {
public:
  virtual void ingresaNick(string nickname) = 0;

  virtual bool ingresaPass(string contrasenia) = 0;
};

#endif
