#include "Pelicula.hh"

//Constructores
Pelicula::Pelicula(){}

Pelicula::Pelicula(string titulo, string sinopsis, float puntajePromedio, string poster){
  this->titulo = titulo;
  this->sinopsis = sinopsis;
  this->puntajePromedio = puntajePromedio;
  this->poster = poster;
}

//Getters & Setters
string getTitulo() {return this->titulo;}
string getSinopsis() {return this->sinopsis;}
float getPuntajePromedio() {return this->puntajePromedio;}
string getPoster(){} {return this->poster;}

void setTitulo(string titulo) {this->titulo = titulo;}
void setSinopsis(string sinopsis) {this->sinopsis = sinopsis;}
void setPuntajePromedio(puntajePromedio) {this->puntajePromedio = puntajePromedio;}
void setPoster(string poster) {this->poster = poster;}

//Destructor
~Pelicula(){}

//Operaciones
float calcularPuntajePromedio(){}
vector<DtCine> obtenerCines(){}
DtCine obtenerCine(){}
vector<DtComentario> obtenerComentario(){}
vector<DtCine> verInfoAdicional(){}
int obtenerPuntuacion(){}
vector<DtInfoPeli> mostrarInfo(){}
vector<DtFuncion> obtenerFunciones(){}
