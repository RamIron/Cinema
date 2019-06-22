#ifndef PALAB06_SALA_HH
#define PALAB06_SALA_HH

#include "Funcion.hh"
#include <iostream>
#include <map>

using namespace std;

class Sala {

private:
  int id;
  static int currentId;
  int capacidad;
  map<int, Funcion *> funciones;

public:
  Sala();

  Sala(int capacidad);

  int getCapacidad();

  int getId();

  void setCapacidad(int capacidad);

  void agregarFuncion(Funcion *funcion);

  vector<Funcion *> obtenerFunciones();

  void eliminarFuncionSala(int idFuncion);

  ~Sala();
};

#endif
