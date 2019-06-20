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

int DtComentario::getProfundidad() const { return this->profundidad; }

/*Destructor*/
DtComentario::~DtComentario() {}

std::ostream &operator<<(std::ostream &output, DtPerro &DtComentario) {
  for(int i=0; i<DtComentario.getProfundidad(); i++){
    output << "\t"
  }
  output << "<" << dtComentario.getNickname() << ">:"
         << "<" << dtComentario.getComentario() << ">" << std::endl
  return output;
}
