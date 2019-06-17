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
};

#endif

/* Compiled with: g++ -Wall -std=c++14 -pthread

vector<DtPelicula *> CPelicula::obtenerPeliculas() {
  ManejadorPelicula *mp = ManejadorPelicula::getInstance();
  vector<DtPelicula> dtPeliculas;
  map<string, Pelicula *>::iterator it;
  auto peliculas = mp.obtenerPeliculas();
  DtPelicula* dtPelicula;

  for(it = peliculas.begin() ; it != peliculas.end() ; ++it){
    dtPelicula = DtPelicula(i->second->getTitulo(),
                            i->second->getSinopsis(),
i->second->getPuntajePromedio(), i->second->getPoster());
    dtPeliculas.push_back(dtPelicula);
  }

  return dtPeliculas;
}


void CPelicula::eligePelicula(string titulo) {
  ManejadorPelicula *mp = ManejadorPelicula::getInstance();
  if(mp.existePelicula(titulo)){
    //hay que declararlo como atributo en el controlador
    this->pelicula = mp.obtenerPelicula(titulo);
  }else{
    throw invalid_argument ("Opcion incorrecta");
  }
}

//agregar funcion al controlador de cine
vector<DtCine *> CCine::obtenerCines() {
  ManejadorCine *mc = ManejadorCine::getInstance();

  vector<DtCine> dtCines;
  map<int, Cine *>::iterator it;
  auto cines = mp.obtenerCines();
  DtCine* dtCine;

  for(it = cines.begin() ; it != cines.end() ; ++it){
    // crear constructor para esta caso especifico
    dtCine = DtCine(i->second->getNumero(), i->second->getDireccion());
    dtCines.push_back(dtCine);
  }

  return dtCines;
}


void CCine::eligeCine(int numero) {
  ManejadorCine *mc = ManejadorCine::getInstance();
  if (mc.existeCine(numero)){
    // hay que declararlo como atributo en el controlador
    this->cine = mc.obtenerCine(numero);
  }else{
    throw invalid_argument ("Opción incorrecta");
  }
}

// crear DtSala
vector<DtSala *> Cine::obtenerSalas() {
  vector<DtSala> dtSalas;
  map<int, Cine *>::iterator it;
  DtSala* dtSala;

  for(it = this->mapOfSalas.begin() ; it != this->mapOfSalas.end() ; ++it){
    // crear constructor para esta caso especifico
    dtSala = DtSala(i->second->getId(), i->second->getCapacidad());
    dtSalas.push_back(dtSala);
  }

  return dtSalas;
}


void CCine::eligeSala(int idSala) {//Version 2
  if (cine.existeSala(idSala)){//agregar operacion en clase Cine
    // hay que declararlo como atributo en el controlador
    this->sala = obtenerSala();//agregar operacion en clase Cine
  }else{
    throw invalid_argument ("Opción incorrecta");
  }
}


void CPelicula::crearFuncion(DtFecha fecha, DtHorario horario, float precio) {
  ManejadorFuncion *mf = ManejadorFuncion::getInstance();
  Funcion *f = new Funcion(fecha, horario, precio);

  CCine *c = CCine::getInstance();
  c.sala.agregarFuncion(f);//agregar operacion en la clase Sala
  this->pelicula.agregarFuncion(f);//agregar operacion en la clase Pelicula
  mf.agregarFuncion(f);
  this->pelicula.agregarCine(this->cine);//agregar operacion en la clase
Pelicula
}
 */