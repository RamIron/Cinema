#include "DtPelicula.hh"

/*Constructor sin parametros*/
DtInfoPeli::DtInfoPeli(){}

/*Constructor con parametros*/
DtInfoPeli::DtInfoPeli(float puntajePromedio, int cantPuntajes,
  map<string, DtComentario*> comentarios,
map<string, DtPuntaje*> puntajes){
  this->puntajePromedio = puntajePromedio;
  this->cantPuntajes = cantPuntajes;
  this->comentarios = comentarios;
  this->puntajes = puntajes;
}

/*Getters*/
float DtInfoPeli::getPuntajePromedio() {return this->puntajePromedio; }
int DtInfoPeli::getCantPuntajes() {return this->cantPuntajes; }
map<string, DtComentario*> DtInfoPeli::getComentarios() {return this->comentarios; }
map<string, DtPuntaje*> DtInfoPeli::getPuntajes() {return this->puntajes; }

/*Destructor*/
DtInfoPeli::~DtInfoPeli(){}
