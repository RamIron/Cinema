#ifndef PALAB06_PUNTAJE_HH
#define PALAB06_PUNTAJE_HH

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include "Comentario.hh"
#include "Puntaje.hh"
#include "Cine.hh"
#include "Funcion.hh"
#include "../Datatypes/DtCine.hh"
#include "../Datatypes/DtComentario.hh"
#include "../Datatypes/DtFuncion.hh"
#include "../Datatypes/DtInfoPeli.hh"
using namespace std;

class Pelicula{
  private:
    string titulo;
    string sinopsis;
    float puntajePromedio;
    string poster;
    map<int, Comentario *> comentarios;
    vector<Puntaje *> puntajes;
    map<int, Funcion*> funciones;
    map<int, Cine*> cines;
  public:
    //Constructores
    Pelicula();
    Pelicula(string titulo, string sinopsis, float puntajePromedio, string poster);

    //Getters & Setters
    string getTitulo();
    string getSinopsis();
    float getPuntajePromedio();
    string getPoster();

    void setTitulo(string titulo);
    void setSinopsis(string sinopsis);
    void setPuntajePromedio();
    void setPoster(string poster);

    //Destructor
    ~Pelicula();

    //Operaciones
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
