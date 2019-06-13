#ifndef PALAB06_DTPELICULA_HH
#define PALAB06_DTPELICULA_HH

#include <iostream>

class DtPelicula {
private:
  string titulo;
  string sinopsis;
  string poster;
  float puntajePromedio;
public:
  /*Constructor sin parametros*/
  DtPelicula();

  /*Constructor con parametros*/
  DtPelicula(string titulo, string sinopsis, string poster,
    float puntajePromedio);

  /*Getters*/
  string getTitulo();

  string getSinopsis();

  string getPoster();

  float getPuntajePromedio();

  /*Destructor*/
  ~DtPelicula();
};

#endif
