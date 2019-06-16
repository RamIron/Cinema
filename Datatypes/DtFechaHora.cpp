#include "DtFechaHora.hh"

using namespace std;

DtFechaHora::DtFechaHora(){
  time_t tim;
  time(&tim);
  tm* now = localtime(&tim);
  anio = now->tm_year+1900;
  mes = now->tm_mon+1;
  dia = now->tm_mday;
  hora = now->tm_hour;
  min = now->tm_min;
  sec= now->tm_sec;
}

DtFechaHora::DtFechaHora(int a, int m, int d, int h, int mi, int s){
  anio = a;
  mes = m;
  dia = d;
  hora = h;
  minuto = mi;
  segundo = s;
}

int DtFechaHora::getAnio(){
  return anio;
}

int DtFechaHora::getMes(){
  return mes;
}

int DtFechaHora::getDia(){
  return dia;
}

int DtFechaHora::getHora(){
  return hora;
}

int DtFechaHora::getminuto(){
  return minuto;
}

int DtFechaHora::getSegundo(){
  return segundo;
}

~DtFechaHora(){}



