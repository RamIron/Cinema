#ifndef PALAB06_DTHORA_HH
#define PALAB06_DTHORA_HH

#include <iostream>

class DtHora {
private:
  int hora;
  int minuto;
  int segundo;

public:
  /*Constructor sin parametros*/
  DtHora();

  /*Constructor con parametros*/
  DtHora(int hora, int minuto, int segundo);

  /*Getters*/
  int getHora();

  int getMinuto();

  int getSegundo();

  /*Destructor*/
  ~DtHora();
};

#endif
