#ifndef PALAB06_DTPELICULA_HH
#define PALAB06_DTPELICULA_HH

#include <iostream>

using namespace std;

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
  string getTitulo() const;

  string getSinopsis() const;

  string getPoster() const;

  float getPuntajePromedio() const;

  /*Destructor*/
  ~DtPelicula();
};

#endif
