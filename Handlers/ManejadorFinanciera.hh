#ifndef PALAB06_MANEJADORFINANCIERA_HH
#define PALAB06_MANEJADORFINANCIERA_HH

#include "../Clases/Financiera.hh"
#include <map>

using namespace std;

class ManejadorFinanciera {
private:
  static ManejadorFinanciera *mfInstance;
  map<string, Financiera *> financieras;

  ManejadorFinanciera();

public:
  static ManejadorFinanciera *getInstance();

  map<string, Financiera *> obtenerFinancieras();

  Financiera *obtenerFinanciera(string nombreFinanciera);

  void agregarFinanciera(Financiera *financiera);

  bool existeFinanciera(string nombreFinanciera);

  void eliminarFinanciera(string nombreFinanciera);

  ~ManejadorFinanciera();
};

#endif
