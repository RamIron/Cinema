#ifndef PALAB06_FUNCION_HH
#define PALAB06_FUNCION_HH

#include "../Datatypes/DtFechaHora.hh"
#include "../Datatypes/DtHorario.hh"
#include "Reserva.hh"
#include <iostream>
#include <vector>

using namespace std;

class Funcion {
private:
  int id;
  static int currentId;
  DtFechaHora fecha;
  DtHorario horario;
  float precio;
  vector<Reserva *> reservas;

public:
  // Constructores
  Funcion();

  Funcion(DtFechaHora fecha, DtHorario horario, float precio);

  // Getters y Setters
  int getId();

  DtFechaHora getFecha();

  DtHorario getHorario();

  float getPrecio();

  void setFecha(DtFechaHora fecha);

  void setHorario(DtHorario horario);

  void setPrecio(float precio);

  void agregarReserva(Reserva *reserva);

  // Destructor
  ~Funcion();
};

#endif
