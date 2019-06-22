#include "Reloj.hh"
#include <time.h>

using namespace std;

Reloj *Reloj::instanciaReloj = NULL;

Reloj::Reloj() { this->manual = false; }

Reloj *Reloj::getInstance() {
  if (instanciaReloj == NULL) {
    instanciaReloj = new Reloj();
  }
  return instanciaReloj;
}

void Reloj::activarManual(DtFechaHora f) {
  this->fechaHoraManual = f;
  this->manual = true;
}

void Reloj::desactivarManual() { this->manual = false; }

DtFechaHora Reloj::getFechaHora() {
  if (!this->manual) {
    time_t tim;
    time(&tim);
    tm *now = localtime(&tim);
    int anio = now->tm_year + 1900;
    int mes = now->tm_mon + 1;
    int dia = now->tm_mday;
    int hora = now->tm_hour;
    int min = now->tm_min;
    this->fechaHoraManual = DtFechaHora(anio, mes, dia, hora, min);
  }
  return fechaHoraManual;
}

Reloj::~Reloj() {}