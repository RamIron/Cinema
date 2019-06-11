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
  Usuario(string, string, string, bool);

  // Getters and Setters
  string getNickname();

  string getConstrasenia();

  string getFoto();

  bool isAdmin();

  void setNickname(string);

  void setContrasenia(string);

  void setFoto(string);

  void setAdmin(bool);

  // Destructor
  ~Usuario();
};

#endif
