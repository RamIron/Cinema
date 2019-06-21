#ifndef PALAB06_DTFECHAHORA_HH
#define PALAB06_DTFECHAHORA_HH

#include "DtFecha.hh"
#include "DtHorario.hh"
#include <iostream>

using namespace std;

class DtFechaHora {
private:
  int anio;
  int mes;
  int dia;
  int hora;
  int minuto;

public:
  DtFechaHora();

  DtFechaHora(int, int, int, int, int);

  DtFechaHora(DtFecha fecha, DtHorario);

  int getAnio();

  int getMes();

  int getDia();

  int getHora();

  int getMinuto();

  ~DtFechaHora();
};

#endif
