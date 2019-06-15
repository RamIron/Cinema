#ifndef PALAB06_DTHORA_HH
#define PALAB06_DTHORA_HH

#include <iostream>

class DtHora {
private:
  int hora;
  int minuto;

public:
  /*Constructor sin parametros*/
  DtHora();

  /*Constructor con parametros*/
  DtHora(int hora, int minuto);

  /*Getters*/
  int getHora() const;

  int getMinuto() const;

  /*Destructor*/
  ~DtHora();
};

#endif
