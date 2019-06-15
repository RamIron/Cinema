#ifndef PALAB06_FUNCION_HH
#define PALAB06_FUNCION_HH

#include "../Datatypes/DtFecha.hh"
#include "../Datatypes/DtHorario.hh"
#include "Reserva.hh"
#include <iostream>
#include <vector>

using namespace std;

class Funcion {
private:
  int id;
  static int currentId;
  DtFecha fecha;
  DtHorario horario;
  float precio;
  vector<Reserva *> reservas;

public:
  // Constructores
  Funcion();

  Funcion(DtFecha fecha, DtHorario horario, float precio);

  // Getters y Setters
  int getId();

  DtFecha getFecha();

  DtHorario getHorario();

  float getPrecio();

  void setFecha(DtFecha fecha);

  void setHorario(DtHorario horario);

  void setPrecio(float precio);

  // Destructor
  ~Funcion();
};

#endif
