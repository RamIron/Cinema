#ifndef PALAB06_COMENTARIO_HH
#define PALAB06_COMENTARIO_HH

#include "Usuario.hh"
#include <iostream>
#include <map>

using namespace std;

class Usuario;

class Comentario {
private:
  int id;
  static int currentId;
  string texto;
  Usuario *u;
  map<int, Comentario *> mapOfComentarios;

public:
  // Constructores
  Comentario();

  Comentario(string, Usuario *);

  // Getters y Setters
  int getId();
  string getTexto();
  Usuario *getUsuario();

  void setTexto(string);
  void setUsuario(Usuario *);

  // Destructor
  ~Comentario();
};

#endif
