#ifndef PALAB06_DTFECHA_HH
#define PALAB06_DTFECHA_HH

#include <iostream>

class DtFecha {
private:
  int dia;
  int mes;
  int anio;

public:
  /*Constructor sin parametros*/
  DtFecha();

  /*Constructor con parametros*/
  DtFecha(int dia, int mes, int anio);

  /*Getters*/
  int getDia() const;

  int getMes() const;

  int getAnio() const;

  friend std::ostream &operator<<(std::ostream &, DtFecha &);

  /*Destructor*/
  ~DtFecha();
};

#endif
