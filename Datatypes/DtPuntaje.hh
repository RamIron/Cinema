#ifndef PALAB06_DTPUNTAJE_HH
#define PALAB06_DTPUNTAJE_HH

#include <iostream>

using namespace std;

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
  int getPuntuacion() const;

  string getNickname() const;

  friend std::ostream &operator<<(std::ostream &, DtPuntaje &);

  /*Destructor*/
  ~DtPuntaje();
};

#endif
