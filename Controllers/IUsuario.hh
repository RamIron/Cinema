#ifndef PALAB06_IUSUARIO_HH
#define PALAB06_IUSUARIO_HH

#include "../Datatypes/DtFechaHora.hh"
#include "../Handlers/ManejadorUsuario.hh"
#include <iostream>

using namespace std;

class IUsuario {
public:
  virtual void ingresaNick(string nickname) = 0;

  virtual bool ingresaPass(string contrasenia) = 0;

  virtual bool estaLogeado() = 0;

  virtual bool esAdmin() = 0;

  virtual void setHoraReloj(DtFechaHora fechaHora) = 0;

  virtual ManejadorUsuario *obtenerManejadorUsuario() = 0;
};

#endif
