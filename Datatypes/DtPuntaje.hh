#ifndef PALAB06_DTPUNTAJE_HH
#define PALAB06_DTPUNTAJE_HH

#include <iostream>

class DtPuntaje {
private:
  int puntuacion;
  string nickname;
public:
  /*Constructor sin parametros*/
  DtPuntaje();

  /*Constructor con parametros*/
  DtPuntaje(int puntuacion, string nickname);

  /*Getters*/
  int getPuntuacion();

  string getnickname();

  /*Destructor*/
  ~DtPuntaje();
};

#endif
