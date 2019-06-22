#ifndef PALAB06_DTCOMENTARIO_HH
#define PALAB06_DTCOMENTARIO_HH

#include <iostream>

using namespace std;

class DtComentario {
private:
  int id;
  string nickname;
  string comentario;
  int profundidad;

public:
  /*Constructor sin parametros*/
  DtComentario();

  /*Constructor con parametros*/
  DtComentario(int id, string nickname, string comentario, int profundidad);

  /*Getters*/
  string getNickname() const;

  string getComentario() const;

  int getProfundidad() const;

  int getId() const;

  /*Operador*/
  friend std::ostream &operator<<(std::ostream &, DtComentario &);

  /*Destructor*/
  ~DtComentario();
};

#endif
