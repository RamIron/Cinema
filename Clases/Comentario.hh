#ifndef PALAB06_COMENTARIO_HH
#define PALAB06_COMENTARIO_HH

#include "Usuario.hh"
#include <iostream>
#include <vector>

using namespace std;

class Usuario;

class Comentario {
private:
  int id;
  static int currentId;
  string texto;
  Usuario *u;
  vector<Comentario *> comentarios;

public:
  // Constructores
  Comentario();

  Comentario(string);

  // Getters y Setters
  int getId();
  string getTexto();

  void setTexto(string);

  // Destructor
  ~Comentario();
};

#endif
