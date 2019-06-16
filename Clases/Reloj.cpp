#include "Reloj.hh"
#include <time.h>

using namespace std;

Reloj* Reloj::instance = NULL;

Reloj* Reloj::getInstance(){
  if(instance == NULL){
    instance = new Reloj();
  }
  return instance;
}

void Reloj::activarManual(DtFechaHora f){
  fechaHoraManual = f;
  Manual = true;
}

void Reloj::desactivarManual(){
  Manual = false;
}

DtFechaHora Reloj::getFechaHora(){
  if(!Manual){
    time_t tim;
    time(&tim);
    tm* now = localtime(&tim);
    int anio = now->tm_year+1900;
    int mes = now->tm_mon+1;
    int dia = now->tm_mday;
    int hora = now->tm_hour;
    int min = now->tm_min;
    int sec= now->tm_sec;
    fechaHoraManual = DtFechaHora(anio, mes, dia, hora, min, sec);
  }
  return fechaHoraManual;
}