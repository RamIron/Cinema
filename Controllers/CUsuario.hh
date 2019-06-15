#ifndef PALAB06_CUSUARIO_HH
#define PALAB06_CUSUARIO_HH

#include "IUsuario.hh"
#include "Usuario.hh"
#include <iostream>
#include <map>

using namespace std;

class CUsuario : public IUsuario {
private:
  static CUsuario *cuInstance;
  map<string, Usuario *> mapOfUsuarios;
  string nickname;

  CUsuario();

public:
  void ingresaNick(string nickname);

  bool ingresaPass(string contrasenia);

  static CUsuario *getInstance();

  ~CUsuario();
};

#endif
