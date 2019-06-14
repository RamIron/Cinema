#include "DtPelicula.hh"

/*Constructor sin parametros*/
DtComentario::DtComentario(){}

/*Constructor con parametros*/
DtComentario::DtComentario(string nickname, string comentario,
map<string, DtComentario*> comentarios){
  this->nickname = nickname;
  this->comentario = comentario;
  this->comentarios = comentarios;
}

/*Getters*/
string DtComentario::getNickname() {return this->nickname; }
string DtComentario::getComentario() {return this->comentario; }
map<string, DtComentario*> DtComentario::getComentarios() {return this->comentarios; }

/*Destructor*/
DtComentario::~DtComentario(){}
