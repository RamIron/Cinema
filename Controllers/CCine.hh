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
    static CCine *ccine;
    DtDireccion direccion;
    vector<int> capacidadSalas;
    map<int, Cine *> mapOfCines;
    Sesion* sesion;
    CCine();
  private:
    void ingresaDireccion(DtDireccion direccion);
    static CCine* getInstance();
    void crearCine();
    void cancelar();
    void ingresaSala(int capacidad);
};

#endif
