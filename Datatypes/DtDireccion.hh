#ifndef PALAB06_DTDIRECCION_HH
#define PALAB06_DTDIRECCION_HH

#include <iostream>

using namespace std;

class DtDireccion {
private:
  string calle;
  int numero;

public:
  DtDireccion();

  DtDireccion(string calle, int numero);

  string getCalle() const;

  int getNumero() const;

  ~DtDireccion();
};

#endif
