#ifndef PALAB06_CCINE_HH
#define PALAB06_CCINE_HH

#include "../Clases/Cine.hh"
#include "../Clases/Sesion.hh"
#include "../Datatypes/DtDireccion.hh"
#include "ICine.hh"
#include <iostream>
#include <map>
#include <vector>

class CCine : public ICine {
private:
  static CCine *ccInstance;
  DtDireccion direccion;
  vector<int> capacidadSalas;
  map<int, Cine *> mapOfCines;
  Sesion *sesion;

  CCine();

public:
  void ingresaDireccion(DtDireccion direccion);

  static CCine *getInstance();

  void crearCine();

  void cancelar();

  void ingresaSala(int capacidad);

  ~CCine();
};

#endif
