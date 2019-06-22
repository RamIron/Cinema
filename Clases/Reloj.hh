#ifndef PALAB06_RELOJ_HH
#define PALAB06_RELOJ_HH

#include "DtFechaHora.hh"

class Reloj {
private:
  DtFechaHora fechaHoraManual;
  bool manual;
  static Reloj *instanciaReloj;

  Reloj();

public:
  static Reloj *getInstance();

  DtFechaHora getFechaHora();

  void activarManual(DtFechaHora fechaHora);

  void desactivarManual();

  ~Reloj();
};

#endif
