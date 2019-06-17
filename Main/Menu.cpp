#include "Menu.hh"
#include <iostream>

using namespace std;

/// Muestra el menú
/// /////////////////////////////////////////////////////////////////
void showMenu() {
  cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n";
  cout << "┃     Bienvenido. Elija una opción                          ┃\n";
  cout << "┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n";
  cout << "┃                                                           ┃\n";
  cout << "┃  1) Iniciar Sesión                                        ┃\n";
  cout << "┃  2) Alta Cine                                             ┃\n";
  cout << "┃  3) Alta Función                                          ┃\n";
  cout << "┃  4) Crear Reserva                                         ┃\n";
  cout << "┃  5) Puntuar Película                                      ┃\n";
  cout << "┃  6) Comentar Película                                     ┃\n";
  cout << "┃  7) Eliminar Película                                     ┃\n";
  cout << "┃  8) Ver Información de Película                           ┃\n";
  cout << "┃  9) Ver Comentarios y Puntajes de Película                ┃\n";
  cout << "┃  0) Salir                                                 ┃\n";
  cout << "┃                                                           ┃\n";
  cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n";
  cout << "Opción: ";
}

/// Retorna una opcion válida para el menú
/// //////////////////////////////////////////
int getOpc(int min, int max) {
  int opcion;
  bool esCorrecta = false;
  do {
    cin >> opcion;
    if (cin.fail()) {
      cin.clear();
      cin.ignore();
      cout << "Opcion incorrecta" << endl;
    } else if (opcion < min || opcion > max) {
      cin.clear();
      cin.ignore();
      cout << "Opcion incorrecta" << endl;
    } else {
      esCorrecta = true;
    }
  } while (!esCorrecta);
  return opcion;
}