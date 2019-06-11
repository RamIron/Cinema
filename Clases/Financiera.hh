#ifndef PALAB06_FINANCIERA_HH
#define PALAB06_FINANCIERA_HH

#include <iostream>

using namespace std;

class Financiera {
private:
  string nombre;
  float descuento;

public:
  // Constructor por defecto
  Financiera();

  // Constructor con parametros
  Financiera(string nombre, float descuento);

  // Getters and Setters
  string getNombre();

  float getDescuento();

  void setNombre(string nombre);

  void setDescuento(float descuento);

  // Destructor
  ~Financiera();
};

#endif
