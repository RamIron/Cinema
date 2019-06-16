#ifndef PALAB06_RELOJ_HH
#define PALAB06_RELOJ_HH

#include "DtFechaHora.hh"

class Reloj{
private:
    DtFechaHora fechaHoraManual;
    bool Manual;
    static Reloj* instance;
    Reloj();
public:
    static Reloj* getInstance();
    DtFechaHora getFechaHora();
    void activarManual(FechaHora f);
    void desactivarManual();
};

#endif
