#ifndef PALAB06_ICINE_HH
#define PALAB06_ICINE_HH

#include "../Datatypes/DtDireccion.hh"

using namespace std;

class ICine {
public:
  virtual void ingresaDireccion(DtDireccion direccion) = 0;

  virtual void crearCine() = 0;

  virtual void cancelar() = 0;

  virtual void ingresaSala(int capacidad) = 0;
};

#endif
