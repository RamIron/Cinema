#ifndef PALAB06_DTFUNCION_HH
#define PALAB06_DTFUNCION_HH

#include <iostream>
#include "DtHorario.hh"
#include "DtFecha.hh"

class DtFuncion {
private:
  int id;
  float precio;
  DtFecha fecha;
  DtHorario horario;

public:
  /*Constructor sin parametros*/
  DtFuncion();

  /*Constructor con parametros*/
  DtFuncion(int id, float precio, DtFecha fecha, DtHorario horario);

  /*Getters*/
  int getid();

  float getPrecio();

  DtFecha getFecha();

  DtHorario getHorario();

  /*Destructor*/
  ~DtFuncion();
};

#endif
