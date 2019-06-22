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

  Puntaje(Usuario *usuario, int puntos);

  // Getters y Setters
  int getPuntos();

  Usuario *getUsuario();

  void setPuntos(int puntos);

  void setUsuario(Usuario *usuario);

  // Destructor
  ~Puntaje();
};

#endif
