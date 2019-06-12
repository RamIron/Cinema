#ifndef PALAB06_DEBITO_HH
#define PALAB06_DEBITO_HH

#include "Reserva.hh"
#include <iostream>

using namespace std;

class Debito : public Reserva {
private:
  string banco;

public:
  // Constructor por defecto
  Debito();

  // Constructor con parametros
  Debito(float costo, int cantEntradas, string banco);

  // Getters and Setters
  string getBanco();

  void setBanco(string banco);

  // Destructor
  ~Debito();
};

#endif
