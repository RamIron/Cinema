#ifndef PALAB06_DTFUNCION_HH
#define PALAB06_DTFUNCION_HH

#include "DtFechaHora.hh"
#include "DtHorario.hh"
#include <iostream>

class DtFuncion {
private:
  int id;
  float precio;
  DtFechaHora fecha;
  DtHorario horario;

public:
  /*Constructor sin parametros*/
  DtFuncion();

  /*Constructor con parametros*/
  DtFuncion(int id, float precio, DtFechaHora fecha, DtHorario horario);

  /*Getters*/
  int getid();

  float getPrecio();

  DtFechaHora getFecha();

  DtHorario getHorario();

  /*Destructor*/
  ~DtFuncion();
};

#endif
