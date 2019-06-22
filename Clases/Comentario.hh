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
  map<int, Comentario *> respuestas;

public:
  // Constructores
  Comentario();

  Comentario(string texto, Usuario *usuario);

  // Getters y Setters
  int getId();

  string getTexto();

  Usuario *getUsuario();

  map<int, Comentario *> getRespuestas();

  void setTexto(string texto);

  void setUsuario(Usuario *usuario);

  void agregarRespuesta(Comentario *respuesta);

  // Destructor
  ~Comentario();
};

#endif
