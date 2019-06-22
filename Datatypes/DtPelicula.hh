#ifndef PALAB06_DTPELICULA_HH
#define PALAB06_DTPELICULA_HH

#include <iostream>
#include <vector>

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

  DtPelicula(string sinopsis, string poster);

  /*Getters*/
  string getTitulo() const;

  string getSinopsis() const;

  string getPoster() const;

  float getPuntajePromedio() const;

  friend std::ostream &operator<<(std::ostream &, vector<DtPelicula> &);

  friend std::ostream &operator<<(std::ostream &, DtPelicula &);

  /*Destructor*/
  ~DtPelicula();
};

#endif
