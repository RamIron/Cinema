#ifndef PALAB06_DTCOMENTARIO_HH
#define PALAB06_DTCOMENTARIO_HH

#include <iostream>

class DtComentario {
private:
  string nickname;
  string comentario;
  map<string, DtComentario*>  comentarios;
public:
  /*Constructor sin parametros*/
  DtComentario();

  /*Constructor con parametros*/
  DtComentario(string nickname, string comentario,
  map<string, DtComentario*> comentarios);

  /*Getters*/
  string getNickname();
  string getComentario();
  map<string, DtComentario*> getComentarios();

  /*Destructor*/
  ~DtComentario();
};

#endif
