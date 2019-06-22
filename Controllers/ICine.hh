#ifndef PALAB06_ICINE_HH
#define PALAB06_ICINE_HH

#include "../Datatypes/DtCine.hh"
#include "../Datatypes/DtDireccion.hh"
#include "../Datatypes/DtSala.hh"
#include <vector>

using namespace std;

class ICine {
public:
  virtual void ingresaDireccion(DtDireccion direccion) = 0;

  virtual void crearCine() = 0;

  virtual void cancelar() = 0;

  virtual void ingresaSala(int capacidad) = 0;

  virtual vector<DtCine> obtenerCines() = 0;

  virtual vector<DtSala> obtenerDtSalas() = 0;

  virtual void eligeCine(int idCine) = 0;

  virtual void eligeSala(int idSala) = 0;
};

#endif
