#ifndef PALAB06_DTINFOPELI_HH
#define PALAB06_DTINFOPELI_HH

#include "DtComentario.hh"
#include "DtPuntaje.hh"
#include <iostream>
#include <map>
#include <vector>

class DtInfoPeli {
private:
  float puntajePromedio;
  int cantPuntajes;
  map<int, DtComentario *> comentarios;
  vector<DtPuntaje *> puntajes;

public:
  /*Constructor sin parametros*/
  DtInfoPeli();

  /*Constructor con parametros*/
  DtInfoPeli(float puntajePromedio, int cantPuntajes);

  /*Getters*/
  float getPuntajePromedio() const;

  int getCantPuntajes() const;

  /*Destructor*/
  ~DtInfoPeli();
};

#endif
