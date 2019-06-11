#ifndef PALAB06_CREDITO_HH
#define PALAB06_CREDITO_HH

#include <iostream>

using namespace std;

class Financiera;

class Credito : public Reserva {
private:
  Financiera * financiera;

public:
  // Constructor por defecto
  Credito();

  // Constructor con parametros
  Credito(float costo, int cantEntradas, //que hago con el puntero );

  // Getters and Setters


  // Destructor
  ~Credito();
};

#include "Financiera.hh"

#endif
