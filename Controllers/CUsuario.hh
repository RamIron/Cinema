#ifndef PALAB06_CUSUARIO_HH
#define PALAB06_CUSUARIO_HH

#include "../Clases/Reloj.hh"
#include "../Clases/Sesion.hh"
#include "../Datatypes/DtFechaHora.hh"
#include "../Handlers/ManejadorUsuario.hh"
#include "IUsuario.hh"
#include "../Clases/Usuario.hh"
#include <iostream>

using namespace std;

class CUsuario : public IUsuario {
private:
  static CUsuario *cuInstance;
  string nickname;
  Sesion *sesion = Sesion::getInstance();
  Reloj *reloj = Reloj::getInstance();
  ManejadorUsuario *mu = ManejadorUsuario::getInstance();

  CUsuario();

public:
  void ingresaNick(string nickname);

  bool ingresaPass(string contrasenia);

  bool estaLogeado();

  bool esAdmin();

  bool setHoraReloj(DtFechaHora fechaHora);

  ManejadorUsuario *obtenerManejadorUsuario();

  static CUsuario *getInstance();

  ~CUsuario();
};

#endif
