#ifndef PALAB06_DTCOMENTARIO_HH
#define PALAB06_DTCOMENTARIO_HH

#include <iostream>
#include <map>

using namespace std;

class DtComentario {
private:
  string nickname;
  string comentario;
  map<string, DtComentario *> comentarios;

public:
  /*Constructor sin parametros*/
  DtComentario();

  /*Constructor con parametros*/
  DtComentario(string nickname, string comentario);

  /*Getters*/
  string getNickname() const;

  string getComentario() const;

  /*Destructor*/
  ~DtComentario();
};

#endif
