#ifndef PALAB06_SALA_HH
#define PALAB06_SALA_HH

#include <iostream>

using namespace std;

class Sala {

private:
  int id;
  static int currentId;
  int capacidad;

public:
  Sala();

  Sala(int);

  int getcapacidad();

  void setCapacidad(int);

  ~Sala();
};

#endif
