#ifndef PALAB06_DTCINE_HH
#define PALAB06_DTCINE_HH

#include "DtDireccion.hh"
#include <iostream>

class DtCine {
private:
  int numero;
  DtDireccion direccion;

public:
  /*Constructor sin parametros*/
  DtCine();

  /*Constructor con parametros*/
  DtCine(int numero, DtDireccion direccion);

  /*Getters*/
  int getNumero() const;

  DtDireccion getDireccion() const;

  /*Destructor*/
  ~DtCine();
};

#endif
