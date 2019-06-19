#ifndef PALAB06_FUNCION_HH
#define PALAB06_FUNCION_HH

#include "../Datatypes/DtHorario.hh"
#include "../Datatypes/DtFecha.hh"
#include "../Datatypes/DtFechaHora.hh"
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
  DtFechaHora fechaHora;
  vector<Reserva *> reservas;

public:
  // Constructores
  Funcion();

  Funcion(DtFecha fecha, DtHorario horario, float precio, DtFechaHora fechaHora);

  // Getters y Setters
  int getId();

  DtFecha getFecha();

  DtHorario getHorario();

  float getPrecio();

  void setFecha(DtFecha fecha);

  DtFechaHora getFechaHora();

  void setFechaHora(DtFechaHora fechaHora);

  void setHorario(DtHorario horario);

  void setPrecio(float precio);

  void agregarReserva(Reserva *reserva);

  // Destructor
  ~Funcion();
};

#endif
