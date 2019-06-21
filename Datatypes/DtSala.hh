#ifndef PALAB06_DTSALA_HH
#define PALAB06_DTSALA_HH

#include "DtFuncion.hh"
#include <vector>

class DtSala {
private:
  int id;
  int capacidad;
  vector<DtFuncion> funciones;

public:
  /*Constructor sin parametros*/
  DtSala();

  /*Constructor con parametros*/
  DtSala(int id, int capacidad);

  DtSala(int id, int capacidad, vector<DtFuncion> dtFunciones);

  /*Getters*/
  int getid();

  int getCapacidad();

  vector<DtFuncion> getFunciones();

  /*Operador*/
  friend std::ostream &operator<<(std::ostream &, DtSala &);

  /*Destructor*/
  ~DtSala();
};

#endif
