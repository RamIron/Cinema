#include "DtInfoPeli.hh"

/*Constructor sin parametros*/
DtInfoPeli::DtInfoPeli() {}

/*Constructor con parametros*/
DtInfoPeli::DtInfoPeli(float puntajePromedio, int cantPuntajes) {
  this->puntajePromedio = puntajePromedio;
  this->cantPuntajes = cantPuntajes;
}

/*Getters*/
float DtInfoPeli::getPuntajePromedio() const { return this->puntajePromedio; }

int DtInfoPeli::getCantPuntajes() const { return this->cantPuntajes; }

/*Destructor*/
DtInfoPeli::~DtInfoPeli() {}
