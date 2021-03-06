#ifndef PALAB06_DTFUNCION_HH
#define PALAB06_DTFUNCION_HH

#include "DtFecha.hh"
#include "DtFechaHora.hh"
#include "DtHorario.hh"

#include <iostream>
#include <vector>

class DtFuncion {
private:
  int id;
  float precio;
  DtFecha fecha;
  DtFechaHora fechaHora;
  DtHorario horario;

public:
  /*Constructor sin parametros*/
  DtFuncion();

  /*Constructor con parametros*/
  DtFuncion(int id, float precio, DtFecha fecha, DtHorario horario,
            DtFechaHora fechaHora);

  DtFuncion(int id, DtFecha fecha, DtHorario horario);

  /*Getters*/
  int getId();

  float getPrecio();

  DtFecha getFecha();

  DtHorario getHorario();

  DtFechaHora getFechaHora();

  friend std::ostream &operator<<(std::ostream &, vector<DtFuncion> &);

  /*Destructor*/
  ~DtFuncion();
};

#endif
