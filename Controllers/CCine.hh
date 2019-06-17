#ifndef PALAB06_CCINE_HH
#define PALAB06_CCINE_HH

#include "../Clases/Cine.hh"
#include "../Clases/Sesion.hh"
#include "../Datatypes/DtCine.hh"
#include "../Datatypes/DtDireccion.hh"
#include "ICine.hh"
#include <iostream>
#include <map>
#include <vector>

class CCine : public ICine {
private:
  static CCine *ccInstance;
  DtDireccion direccion;
  Cine *cine;

public:
  Cine *getCine() const;

  void setCine(Cine *cine);

private:
  Sala *sala;
  vector<int> capacidadSalas;
  map<int, Cine *> mapOfCines;
  Sesion *sesion;

public:
  Sala *getSala() const;

  void setSala(Sala *sala);

private:
  CCine();

public:
  void ingresaDireccion(DtDireccion direccion);

  static CCine *getInstance();

  void crearCine();

  void cancelar();

  void ingresaSala(int capacidad);

  vector<DtCine> obtenerCines();

  vector<DtSala> obtenerDtSalas();

  void eligeCine(int id);

  void eligeSala(int idSala);

  ~CCine();
};

#endif
