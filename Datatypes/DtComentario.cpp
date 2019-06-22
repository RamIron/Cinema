#include "DtComentario.hh"

/*Constructor sin parametros*/
DtComentario::DtComentario() {}

/*Constructor con parametros*/
DtComentario::DtComentario(int id, string nickname, string comentario,
                           int profundidad) {
  this->id = id;
  this->nickname = nickname;
  this->comentario = comentario;
  this->profundidad = profundidad;
}

/*Getters*/
string DtComentario::getNickname() const { return this->nickname; }

string DtComentario::getComentario() const { return this->comentario; }

int DtComentario::getProfundidad() const { return this->profundidad; }

int DtComentario::getId() const { return this->id; }

std::ostream &operator<<(std::ostream &output, DtComentario &dtComentario) {
  for (int i = 0; i < dtComentario.getProfundidad(); i++) {
    output << "\t";
  }
  output << dtComentario.getId() << "- " << dtComentario.getNickname() << ": "
         << dtComentario.getComentario() << std::endl;
  return output;
}

/*Destructor*/
DtComentario::~DtComentario() {}
