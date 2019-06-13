#ifndef PALAB06_CUSUARIO_HH
#define PALAB06_CUSUARIO_HH

#include <iostream>
#include "Usuario.hh"

using namespace std;

class CUsuario : public IUsuario{
  public:
    static CUsuario *cusuario;
    map<string, Usuario *> mapOfUsuarios;
    CUsuario();
  private:
    void ingresaNick(string nickname);
    bool ingresaPass(string contrasenia);
    static CUsuario* getInstance();
};

#endif
