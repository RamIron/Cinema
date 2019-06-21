#ifndef PALAB06_CINE_HH
#define PALAB06_CINE_HH

#include "../Datatypes/DtDireccion.hh"
#include "../Datatypes/DtSala.hh"
#include "Sala.hh"
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Cine {
private:
  int id;
  static int currentId;
  DtDireccion direccion;
  map<int, Sala *> mapOfSalas;

public:
  // Constructor por defecto
  Cine();

  // Constructor con parametros
  Cine(DtDireccion);

  // Getters and Setters

  int getId();

  DtDireccion getDireccion();

  void setDireccion(DtDireccion);

  // Operaciones

  vector<DtSala> obtenerDtSalas();

  map<int, Sala *> obtenerSalas();

  void agregarSala(Sala *);

  bool existeSala(int idSala);

  Sala *obtenerSala(int idSala);

  void eliminarFuncionCine(int idFuncion);

  ~Cine();
};

#endif
