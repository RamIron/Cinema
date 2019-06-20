#ifndef PALAB06_PELICULA_HH
#define PALAB06_PELICULA_HH

#include "../Datatypes/DtCine.hh"
#include "../Datatypes/DtComentario.hh"
#include "../Datatypes/DtFuncion.hh"
#include "../Datatypes/DtInfoPeli.hh"
#include "../Datatypes/DtPrintComentario.hh"
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
  float calcularPuntajePromedio();

  vector<DtCine> obtenerCines();

  DtCine obtenerDtCine(int id);

  Cine *obtenerCine(int id);

  vector<DtComentario> obtenerComentario();

  vector<DtCine> verInfoAdicional();

  int obtenerPuntuacion();

  vector<DtInfoPeli> mostrarInfo();

  vector<DtFuncion> obtenerDtFunciones();

  void agregarFuncion(Funcion *);

  void agregarCine(Cine *);

  bool existeCine(int id);

  bool existeFuncion(int id);

  void agregarComentario(string comentario, Usuario *usuario);

  map<int, Comentario*> obtenerComentarios();

  void obtenerDtComentarios (map<int, Comentario*> comentarios, vector<DtPrintComentario> &dtComentarios, int prof);

  bool existePuntajeUsuario(string nickname);

  Puntaje *obtenerPuntaje(string nickname);

  void modificarPuntaje(int puntajeNuevo, string nickname);

  void agregarPuntaje(Puntaje *puntaje);

  void respondeComentario(int idComentario, string respuesta, Usuario *usuario);

  // Destructor
  ~Pelicula();
};

#endif

