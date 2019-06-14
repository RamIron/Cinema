#ifndef PALAB06_DTINFOPELI_HH
#define PALAB06_DTINFOPELI_HH

#include <iostream>
#include <map>
#include "DtComentario.hh"
#include "DtPuntaje.hh"

class DtInfoPeli {
private:
  float puntajePromedio;
  int cantPuntajes;
  map<string, DtComentario*> comentarios;
  map<string, DtPuntaje*> puntajes;
public:
  /*Constructor sin parametros*/
  DtInfoPeli(float puntajePromedio, int cantPuntajes,
    map<string, DtComentario*> comentarios,
  map<string, DtPuntaje*> puntajes);

  /*Constructor con parametros*/
  DtInfoPeli();

  /*Getters*/
  float getPuntajePromedio();
  int getCantPuntajes();
  map<string, DtComentario*> getComentarios();
  map<string, DtPuntaje*> getPuntajes();

  /*Destructor*/
  ~DtInfoPeli();
};

#endif
