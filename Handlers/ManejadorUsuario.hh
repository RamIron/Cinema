#ifndef PALAB06_MANEJADORUSUARIO_HH
#define PALAB06_MANEJADORUSUARIO_HH

#include "../Clases/Usuario.hh"
#include <map>

using namespace std;

class ManejadorUsuario {
private:
  static ManejadorUsuario *muInstance;
  map<string, Usuario *> usuarios;

  ManejadorUsuario();

public:
  static ManejadorUsuario *getInstance();

  map<string, Usuario *> obtenerUsuarios();

  Usuario *obtenerUsuario(string nickname);

  void agregarUsuario(Usuario *usuario);

  bool existeUsuario(string nickname);

  void eliminarUsuario(string nickname);

  ~ManejadorUsuario();
};

#endif
