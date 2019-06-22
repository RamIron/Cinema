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
  DtHorario(string horaInicio, string horaFin);

  /*Getters*/
  string getHoraInicio() const;

  string getHoraFin() const;

  friend std::ostream &operator<<(std::ostream &, DtHorario &);

  /*Destructor*/
  ~DtHorario();
};

#endif
