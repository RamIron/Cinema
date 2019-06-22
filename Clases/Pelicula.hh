#ifndef PALAB06_PELICULA_HH
#define PALAB06_PELICULA_HH

#include "../Datatypes/DtCine.hh"
#include "../Datatypes/DtComentario.hh"
#include "../Datatypes/DtFuncion.hh"
#include "../Datatypes/DtInfoPeli.hh"
#include "../Datatypes/DtPuntaje.hh"
#include "Cine.hh"
#include "Comentario.hh"
#include "Funcion.hh"
#include "Puntaje.hh"
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Pelicula {
private:
  string titulo;
  string sinopsis;
  float puntajePromedio;
  string poster;
  map<int, Comentario *> comentarios;
  map<string, Puntaje *> puntajes;
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

  // Operaciones

  void agregarFuncion(Funcion *funcion);

  bool existeFuncion(int idFuncion);

  void agregarCine(Cine *cine);

  bool existeCine(int idCine);

  vector<DtCine> obtenerDtCines();

  Cine *obtenerCine(int idCine);

  void agregarComentario(string comentario, Usuario *usuario);

  map<int, Comentario *> obtenerComentarios();

  void obtenerDtComentarios(map<int, Comentario *> comentarios,
                            vector<DtComentario> &dtComentarios,
                            int profundidad);

  void respondeComentario(int idComentario, string respuesta, Usuario *usuario);

  void agregarPuntaje(Puntaje *puntaje);

  bool existePuntajeUsuario(string nickname);

  Puntaje *obtenerPuntaje(string nickname);

  void modificarPuntaje(int puntajeNuevo, string nickname);

  vector<DtPuntaje> obtenerDtPuntajes();

  // Destructor
  ~Pelicula();
};

#endif
