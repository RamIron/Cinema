#include "Reloj.hh"
#include <time.h>

Reloj *Reloj::reloj = NULL;

Reloj::Reloj() {}

Reloj *Reloj::getInstance() {
  if (reloj == NULL) {
    reloj = new Reloj();
  }
  return reloj;
}

// Fecha y hora que me da el usuario
void Reloj::activarManual(DtFecha f, DtHora h) {
  fechaManual = f;
  horaManual = h;
  manual = true;
}

void Reloj::desactivarManual() { manual = false; }

DtFecha Reloj::getFecha() {
  if (!manual) {
    // El sistema me da la hora y la fecha
    return DtFecha();
  } else {
    return this->fechaManual;
  }
}

DtHora Reloj::getHora() {
  if (!manual) {
    // El sistema me da la hora y la fecha
    return DtHora();
  } else {
    return this->horaManual;
  }
}

bool Reloj::getEstaManual() { return manual; }
