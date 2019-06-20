#include "DtPrintComentario.hh"

DtPrintComentario::DtPrintComentario(){}

DtPrintComentario::DtPrintComentario(string nickname, int profundidad, string comentario){
  this->nickname = nickname;
  this->profundidad = profundidad;
  this->comentario = comentario;
}

string DtPrintComentario::getNickname(){ return this->nickname; }

string DtPrintComentario::getComentario(){ return this->comentario; }

int DtPrintComentario::getProfundidad(){ return this->profundidad; }

/*Destructor*/
DtPrintComentario::~DtPrintComentario(){}
