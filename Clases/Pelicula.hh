#ifndef PALAB06_PELICULA_HH
#define PALAB06_PELICULA_HH

#include "../Datatypes/DtCine.hh"
#include "../Datatypes/DtComentario.hh"
#include "../Datatypes/DtFuncion.hh"
#include "../Datatypes/DtInfoPeli.hh"
#include "Cine.hh"
#include "Comentario.hh"
#include "Funcion.hh"
#include "Puntaje.hh"
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class Pelicula {
private:
  string titulo;
  string sinopsis;
  float puntajePromedio;
  string poster;
  map<int, Comentario *> comentarios;
  vector<Puntaje *> puntajes;
  map<int, Funcion *> funciones;
  map<int, Cine *> cines;

public:
  // Constructores
  Pelicula();

  Pelicula(string titulo, string sinopsis, float puntajePromedio,
           string poster);

  // Getters & Setters
  string getTitulo();

  string getSinopsis();

  float getPuntajePromedio();

  string getPoster();

  void setTitulo(string titulo);

  void setSinopsis(string sinopsis);

  void setPuntajePromedio(float puntajePromedio);

  void setPoster(string poster);

  // Destructor
  ~Pelicula();

  // Operaciones
  float calcularPuntajePromedio();

  vector<DtCine> obtenerCines();

  DtCine obtenerCine();

  vector<DtComentario> obtenerComentario();

  vector<DtCine> verInfoAdicional();

  int obtenerPuntuacion();

  vector<DtInfoPeli> mostrarInfo();

  vector<DtFuncion> obtenerFunciones();
};

#endif
