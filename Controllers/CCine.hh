#ifndef PALAB06_CCINE_HH
#define PALAB06_CCINE_HH

#include <iostream>
#include <map>
#include <vector>
#include "ICine.hh"
#include "./Clases/Cine.hh"
#include "./Sesion.hh"
#include "./Datatypes/DtSala.hh"
#include "./Datatypes/DtDireccion.hh"

class CCine:public ICine{
  public:
    DtDireccion direccion;
    vector<int> capacidadSalas;
    map<int, Cine *> mapOfCines;
    Sesion* sesion;
  private:
    void ingresaDireccion(DtDireccion direccion);
    void crearCine();
    void cancelar();
    void ingresaSala(int capacidad);
};

#endif
