#ifndef PALAB06_CREDITO_HH
#define PALAB06_CREDITO_HH

#include "Financiera.hh"
#include "Reserva.hh"
#include <iostream>

using namespace std;

class Credito : public Reserva {
private:
  Financiera *financiera;

public:
  // Constructor por defecto
  Credito();

  // Constructor con parametros
  Credito(float precio, int cantAsientos, Usuario *usuario,
          Financiera *financiera);

  // Getters and Setters
  Financiera *getFinanciera();

  void setFinanciera(Financiera *financiera);

  // Destructor
  ~Credito();
};

#endif
