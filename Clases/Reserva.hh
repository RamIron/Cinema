#ifndef PALAB06_RESERVA_HH
#define PALAB06_RESERVA_HH

#include "Usuario.hh"
#include <iostream>

using namespace std;

class Reserva {
private:
  float costo;
  int cantEntradas;
  Usuario *u;

public:
  // Constructor por defecto
  Reserva();

  // Constructor con parametros
  Reserva(float costo, int cantEntradas, Usuario *usuario);

  // Getters and Setters
  float getCosto();

  int getCantEntradas();

  Usuario *getUsuario();

  void setUsuario(Usuario *usuario);

  void setCosto(float costo);

  void setCantEntradas(int cantEntradas);

  // Destructor
  virtual ~Reserva() = 0;
};

#endif
