#ifndef PALAB06_MANEJADORCINE_HH
#define PALAB06_MANEJADORCINE_HH
#include "./Clases/Cine.hh"
#include <map>
#include <vector>

using namespace std;

class ManejadorCine {
private:
  static ManejadorCine *instancia;
  map<int, Cine *> cines;
  ManejadorCine();

public:
  static ManejadorCine *getInstancia();
  vector<Cine *> obtenerCines();
  Cine *obtenerCine(int id);
  void agregarCine(Cine *);
  bool existeCine(int id);
  void eliminarCine(int id);
  virtual ~ManejadorCine();
};
#endif
