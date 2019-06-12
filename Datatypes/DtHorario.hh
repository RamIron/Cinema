#ifndef PALAB06_DTHORARIO_HH
#define PALAB06_DTHORARIO_HH

#include <iostream>

using namespace std;

class DtHorario {
private:
  string horaInicio;
  string horaFin;

public:
  /*Constructor sin parametros*/
  DtHorario();

  /*Constructor con parametros*/
  DtHorario(string, string);

  /*Getters*/
  string getHoraInicio() const;

  string getHoraFin() const;

  /*Destructor*/
  ~DtHorario();
};

#endif
