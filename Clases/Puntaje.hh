#ifndef PALAB06_PUNTAJE_HH
#define PALAB06_PUNTAJE_HH

#include "Usuario.hh"
#include <iostream>

using namespace std;

class Puntaje {
private:
  int puntos;
  Usuario *u;

public:
  // Constructores
  Puntaje();

  Puntaje(Usuario *u, int puntos);

  // Getters y Setters
  int getPuntos();

  void setPuntos(int puntos);

  Usuario *getUsuario();

  void setUsuario(Usuario *u);

  // Destructor
  ~Puntaje();
};

#endif
