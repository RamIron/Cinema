#ifndef PALAB06_SALA_HH
#define PALAB06_SALA_HH

#include "Funcion.hh"
#include <iostream>
#include <map>

using namespace std;

class Sala {

private:
  int id;
  static int currentId;
  int capacidad;
  map<int, Funcion *> mapOfFunciones;

public:
  Sala();

  Sala(int);

  int getcapacidad();

  void setCapacidad(int);

  ~Sala();
};

#endif
