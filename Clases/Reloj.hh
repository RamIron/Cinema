#ifndef PALAB06_RELOJ_HH
#define PALAB06_RELOJ_HH

#include "DtFecha.hh"
#include "DtHora.hh"

class Reloj {
private:
  static Reloj *reloj;
  DtFecha fechaManual;
  DtHora horaManual;
  bool manual;
  Reloj();

public:
  static Reloj *getInstance();

  DtHora getHora();

  DtFecha getFecha();

  void activarManual(DtFecha f, DtHora h);

  void desactivarManual();

  bool getEstaManual();
};

#endif
