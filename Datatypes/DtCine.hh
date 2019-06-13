#ifndef PALAB06_DTCINE_HH
#define PALAB06_DTCINE_HH

#include <iostream>

class DtCine {
private:
  int numero;
  int capacidad;
public:
  /*Constructor sin parametros*/
  DtCine();

  /*Constructor con parametros*/
  DtCine(int numero, int capacidad);

  /*Getters*/
  int getNumero();

  int getCapacidad();

  /*Destructor*/
  ~DtCine();
};

#endif
