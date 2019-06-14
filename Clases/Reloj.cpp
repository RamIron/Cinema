#include "Reloj.hh"
#include <time.h>

using namespace std;

Reloj* Reloj::reloj = NULL;

Reloj* Reloj::getInstance(){
  if(reloj == NULL){
    reloj = new Reloj();
  }
  return reloj;
}

//Fecha y hora que me da el usuario
void Reloj::activarManual(DtFecha f, DtHora h){
  fechaManual = f;
  horaManual = h;
  Manual = true;
}

void Reloj::desactivarManual(){
  Manual = false;
}

DtFecha Reloj::getFecha(){
  if(!Manual){
    //El sistema me da la hora y la fecha
    return fecha = DtFecha::DtFecha();
  } else {
      return this->fechaManual;
    }
}

DtHora Reloj::getHora(){
  if(!Manual){
    //El sistema me da la hora y la fecha
    return hora = DtHora::DtHora();
  } else {
      return this->horaManual;
    }
}

bool Reloj::getEstaManual(){ return manual; }
