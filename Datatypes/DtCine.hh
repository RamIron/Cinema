#ifndef PALAB06_DTCINE_HH
#define PALAB06_DTCINE_HH

#include "DtDireccion.hh"
#include <iostream>

class DtCine {
private:
  int id;
  DtDireccion direccion;

public:
  /*Constructor sin parametros*/
  DtCine();

  /*Constructor con parametros*/
  DtCine(int id, DtDireccion direccion);

  /*Getters*/
  int getId() const;

  DtDireccion getDireccion() const;

  /*Destructor*/
  ~DtCine();
};

#endif
