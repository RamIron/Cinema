#include "DtComentario.hh"

/*Constructor sin parametros*/
DtComentario::DtComentario() {}

/*Constructor con parametros*/
DtComentario::DtComentario(string nickname, string comentario) {
  this->nickname = nickname;
  this->comentario = comentario;
}

/*Getters*/
string DtComentario::getNickname() const { return this->nickname; }

string DtComentario::getComentario() const { return this->comentario; }

/*Destructor*/
DtComentario::~DtComentario() {}
