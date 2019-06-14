#ifndef PALAB06_RELOJ_HH
#define PALAB06_RELOJ_HH

#include "DtHora.hh"
#include "DtFecha.hh"

class Reloj{
  private:
    static Reloj* reloj;
    Reloj();
    DtFecha fechaManual;
    DtHora horaManual;
    bool manual;
  public:
    static Reloj* getInstance();
    DtFecha getHora();
    DtHora getFecha();
    void activarManual(DtFecha f, DtHora h);
    void desactivarManual();
    bool getEstaManual();
};

#endif
