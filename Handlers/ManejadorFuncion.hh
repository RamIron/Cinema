#ifndef PALAB06_MANEJADORFUNCION_HH
#define PALAB06_MANEJADORFUNCION_HH

#include "../Clases/Funcion.hh"
#include <map>

using namespace std;

class ManejadorFuncion {
private:
  static ManejadorFuncion *mfInstance;
  map<int, Funcion *> funciones;

  ManejadorFuncion();

public:
  static ManejadorFuncion *getInstance();

  map<int, Funcion *> obtenerFunciones();

  Funcion *obtenerFuncion(int idFuncion);

  void agregarFuncion(Funcion *funcion);

  bool existeFuncion(int idFuncion);

  void eliminarFuncion(int idFuncion);

  ~ManejadorFuncion();
};

#endif
