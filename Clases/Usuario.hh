#ifndef PALAB06_USUARIO_HH
#define PALAB06_USUARIO_HH

#include <iostream>

using namespace std;

class Usuario {
private:
  string nickname;
  string contrasenia;
  string foto;
  bool esAdmin;

public:
  // Constructor por defecto
  Usuario();

  // Constructor con parametros
  Usuario(string nickname, string contrasenia, string foto, bool esAdmin);

  // Getters and Setters
  string getNickname();

  string getConstrasenia();

  string getFoto();

  bool isAdmin();

  void setNickname(string nickname);

  void setContrasenia(string contrasenia);

  void setFoto(string foto);

  void setAdmin(bool esAdmin);

  // Destructor
  ~Usuario();
};

#endif
