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
  Sala *sala;
  vector<int> capacidadSalas;
  Sesion *sesion = Sesion::getInstance();
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

  Sala *getSala() const;

  void setSala(Sala *sala);

  Cine *getCine() const;

  void setCine(Cine *cine);

  ~CCine();
};

#endif
