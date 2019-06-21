#ifndef PALAB06_MANEJADORCOMENTARIO_HH
#define PALAB06_MANEJADORCOMENTARIO_HH

#include "../Clases/Comentario.hh"
#include <map>

using namespace std;

class ManejadorComentario {
private:
  static ManejadorComentario *mcInstance;
  map<int, Comentario *> comentarios;

  ManejadorComentario();

public:
  static ManejadorComentario *getInstance();

  map<int, Comentario *> obtenerComentarios();

  Comentario *obtenerComentario(int id);

  void agregarComentario(Comentario *);

  bool existeComentario(int id);

  void eliminarComentario(int id);

  ~ManejadorComentario();
};

#endif
