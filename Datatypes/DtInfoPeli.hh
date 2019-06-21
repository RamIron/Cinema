#ifndef PALAB06_DTINFOPELI_HH
#define PALAB06_DTINFOPELI_HH

#include "DtComentario.hh"
#include "DtPuntaje.hh"
#include <iostream>
#include <vector>

class DtInfoPeli {
private:
  string titulo;
  float puntajePromedio;
  int cantPuntajes;
  vector<DtComentario> comentarios;
  vector<DtPuntaje> puntajes;

public:
  /*Constructor sin parametros*/
  DtInfoPeli();

  /*Constructor con parametros*/
  DtInfoPeli(string titulo, float puntajePromedio, int cantPuntajes,
             vector<DtComentario> comentarios, vector<DtPuntaje> puntajes);

  /*Getters*/
  string getTitulo() const;

  float getPuntajePromedio() const;

  int getCantPuntajes() const;

  vector<DtComentario> getComentarios();

  vector<DtPuntaje> getPuntajes();

  friend std::ostream &operator<<(std::ostream &, DtInfoPeli &);

  /*Destructor*/
  ~DtInfoPeli();
};

#endif
