#include "Main.hh"
#include "../Clases/Sesion.hh"
#include "../Clases/Usuario.hh"
#include "../Clases/Reloj.hh"
#include "../Controllers/CCine.hh"
#include "../Controllers/CUsuario.hh"
#include "../Controllers/CPelicula.hh"
#include "../Handlers/ManejadorUsuario.hh"
#include "../Handlers/ManejadorPelicula.hh"
#include "../Handlers/ManejadorFinanciera.hh"
#include "../Handlers/ManejadorCine.hh"
#include "../Datatypes/DtFecha.hh"
#include <stdexcept>

#include <iostream>

using namespace std;

int main() {

  // Iniciar Sesion
  /*
  CUsuario *cu = CUsuario::getInstance();
  ManejadorUsuario *mu = ManejadorUsuario::getInstance();
  Usuario *u = new Usuario("Mathias", "asd", "tuvieja", true);
  mu->agregarUsuario(u);

  cu->ingresaNick("Mathias");
  cu->ingresaPass("asd");
  Sesion *s = Sesion::getInstance();
   */


  // Alta Cine
  /*
  auto cCine = CCine::getInstance();
  auto dtDireccion = DtDireccion("josebo", 13);
  cCine->ingresaDireccion(dtDireccion);
  cCine->ingresaSala(10);
  cCine->ingresaSala(12);
  cCine->crearCine();
  auto dtDireccion1 = DtDireccion("toto", 15);
  cCine->ingresaDireccion(dtDireccion1);
  cCine->ingresaSala(5);
  cCine->ingresaSala(17);
  cCine->crearCine();
  auto manejadorCine = ManejadorCine::getInstance();
   */

  // Alta Funcion
  /*
  auto pelicula = new Pelicula("Rey Leon", "eta buenardaaa", 9.6, "tu vieja en tanga");
  auto pelicula1 = new Pelicula("Cars", "es de putitos", 5.6, "tu vieja en tanga");
  auto pelicula2 = new Pelicula("Scream", "wasaaaa", 10, "tu vieja en tanga");
  auto manejadorPelicula = ManejadorPelicula::getInstance();
  manejadorPelicula->agregarPelicula(pelicula);
  manejadorPelicula->agregarPelicula(pelicula1);
  manejadorPelicula->agregarPelicula(pelicula2);
  auto cPelicula = CPelicula::getInstance();
  auto dtPeliculas = cPelicula->obtenerPeliculas();
  try {
    cPelicula->eligePelicula("Rey Leon");
  } catch (invalid_argument &e) {
    cout << e.what() << endl;

  }
  auto dtCines = cCine->obtenerCines();
  try {
    cCine->eligeCine(0);
  } catch (invalid_argument &e) {
    cout << e.what() << endl;
  }
  auto dtSalas = cCine->obtenerDtSalas();
  try {
    cCine->eligeSala(0);
  } catch (invalid_argument &e) {
    cout << e.what() << endl;
  }
  auto dtFecha = DtFecha(19, 6, 2020);
  auto dtHorario = DtHorario("02:50", "00:00");
  float precio = 100;
  cPelicula->crearFuncion(dtFecha, dtHorario, precio);
   */

  // Ver Info Pelicula
  /*
  auto titulosPeliculas = cPelicula->obtenerTitulosPeliculas();
  try {
    cPelicula->eligePelicula("Rey Leon");
    auto dtPelicula = cPelicula->mostrarPelicula();
    auto dtCinePelicula = cPelicula->verInfoAdicional();
    auto dtFunciones = cPelicula->eligeCine(0);
    // Crear Reserva
    cPelicula->seleccionaFuncion(0);
    cPelicula->ingresaCantEntradas(2);
    // Debito
    cPelicula->ingresarBanco("BROU");
    auto precioDebito = cPelicula->obtenerPrecioDebito();
    cPelicula->crearReservaDebito(precioDebito);
    // Credito
    auto manejadorFinanciera = ManejadorFinanciera::getInstance();
    auto financiera = new Financiera("PREX", 50);
    manejadorFinanciera->agregarFinanciera(financiera);
    float descuentoFinanciera = cPelicula->ingresarFinanciera("PREX");
    auto precioCredito = cPelicula->obtenerPrecioCredito(descuentoFinanciera);
    cPelicula->crearReservaCredito(precioCredito);
  } catch (invalid_argument &e) {
    cout << e.what() << endl;
  }
   */


  int opc;

  do {
    showMenu();
    opc = getOpc(0, 9);
    switch (opc) {
      case 1: /// OPCION Iniciar Sesión
        /// ///////////////////////////////////////////////////////
        cout << "Ingrese su nickname:\n";
        cout << "Ingrese su contrasenia:\n";
        cout << "Desea reintentar el ingreso de contrasenia?\n";
        break;

      case 2: /// OPCION Alta Cine
        /// ///////////////////////////////////////////////////////
        cout << "Ingrese la direccion del cine a registrar:\n";
        cout << "Ingrese la capacidad de la sala:\n";
        cout << "Desea agregar otra sala?\n";
        cout << "Desea dar de alta el cine?\n";
        cout << "Desea agregar otro cine?\n";
        break;

      case 3: /// OPCION Alta Función
        /// ///////////////////////////////////////////////////////
        cout << "Elija el titulo de la pelicula a la que desea agregar "
                "funciones:\n";
        cout << "Elija el id del cine que desee:\n";
        cout << "Elija la sala:\n";
        cout << "Ingrese la fecha:\n";
        cout << "Ingrese el horario de comienzo:\n";
        cout << "Ingrese el horario de fin:\n";
        cout << "Desea agregar otra funcion?\n";
        break;

      case 4: /// OPCION Crear Reserva
        /// ///////////////////////////////////////////////////////
        cout << "Elija el titulo de la pelicula o escriba 'cancelarReserva' para "
                "salir:\n";
        cout << "Desea ver información adicional de la pelicula? Si/No:\n";
        cout << "Elija el cine o escriba 'cancelarReserva' para salir:\n";
        cout << "Desea elegir otra pelicula?\n";
        cout << "Elija la funcion que desee:\n";
        cout << "Ingrese la cantidad de asientos a reservar:\n";
        cout << "Ingrese 'Debito' o 'Credito' como modo de pago:\n";
        cout << "Desea confirmar su reserva? Si/No:\n";
        break;

      case 5: /// OPCION Puntuar Película
        /// /////////////////////////////////////////////////////////
        cout << "Elija el titulo de la pelicula:\n";
        cout << "Desea modificar su puntuación?\n";
        cout << "Ingrese el puntaje:\n";
        break;

      case 6: /// OPCION Comentar Película
        /// //////////////////////////////////////////////////////
        cout << "Elija el titulo de la pelicula:\n";
        cout << "Desea realizar un nuevo comentari o contestar uno existente?\n";
        cout << "Ingrese su comentario:\n";
        break;

      case 7: /// OPCION Eliminar Película
        /// //////////////////////////////////////////////////////
        cout << "Elija el titulo de la pelicula:\n";
        cout << "Desea eliminar la pelicula?\n";
        break;

      case 8: /// OPCION Ver Información de Película
        /// //////////////////////////////////////////////////////
        cout << "Elija el titulo de la pelicula o escriba 'cancelarVerInfo' para "
                "salir:\n";
        cout << "Desea ver información adicional de la pelicula? Si/No:\n";
        cout << "Elija el cine o escriba 'cancelarVerInfo' para salir:\n";
        cout << "Desea elegir otra pelicula?\n";
        break;

      case 9: /// OPCION Ver Comentarios y Puntajes de Película
        /// //////////////////////////////////////////////////////
        cout << "Elija el titulo de la pelicula:\n";
        break;

      case 0: /// OPCION SALIR
        /// /////////////////////////////////////////////////////////////////
        cout << "Hasta la proxima\n";
        break;

      default: /// DEFAULT
        /// ////////////////////////////////////////////////////////////////////
        cout << "Opción incorrecta\n\n";
    }
  } while (opc != 0);
  return 0;
}
