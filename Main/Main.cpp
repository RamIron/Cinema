#include "Main.hh"
#include "../Clases/Reloj.hh"
#include "../Clases/Sesion.hh"
#include "../Clases/Usuario.hh"
#include "../Controllers/CCine.hh"
#include "../Controllers/CCineFactory.hh"
#include "../Controllers/CPelicula.hh"
#include "../Controllers/CPeliculaFactory.hh"
#include "../Controllers/CUsuario.hh"
#include "../Controllers/CUsuarioFactory.hh"
#include "../Controllers/ICine.hh"
#include "../Controllers/IPelicula.hh"
#include "../Controllers/IUsuario.hh"
#include "../Datatypes/DtFecha.hh"
#include "../Handlers/ManejadorCine.hh"
#include "../Handlers/ManejadorFinanciera.hh"
#include "../Handlers/ManejadorPelicula.hh"
#include "../Handlers/ManejadorUsuario.hh"

#include <stdexcept>

#include <iostream>

using namespace std;

int main() {

  // Iniciar Sesion

  /*
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
  auto pelicula =
      new Pelicula("Rey Leon", "eta buenardaaa", 9.6, "tu vieja en tanga");
  auto pelicula1 =
      new Pelicula("Cars", "es de putitos", 5.6, "tu vieja en tanga");
  auto pelicula2 = new Pelicula("Scream", "wasaaaa", 10, "tu vieja en tanga");
  auto manejadorPelicula = ManejadorPelicula::getInstance();
  manejadorPelicula->agregarPelicula(pelicula);
  manejadorPelicula->agregarPelicula(pelicula1);
  manejadorPelicula->agregarPelicula(pelicula2);
  auto cPelicula = CPelicula::getInstance();
  auto dtPeliculas = cPelicula->obtenerPeliculas();
  try {
    cPelicula->eligePelicula("Scream");
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
  auto dtSalas2 = cCine->obtenerDtSalas();
  for (auto sala : dtSalas2) {
    cout << sala;
  }
   */
  // Ver Info Pelicula
  /*
  auto titulosPeliculas = cPelicula->obtenerTitulosPeliculas();
  try {
    cPelicula->eligePelicula("Scream");
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

  // Puntuar Pelicula
  /*
  manejadorPelicula->agregarPelicula(pelicula);
  manejadorPelicula->agregarPelicula(pelicula1);
  manejadorPelicula->agregarPelicula(pelicula2);
  auto dtPeliculas1 = cPelicula->obtenerPeliculas();
  cPelicula->eligePelicula("Scream");
  if (cPelicula->existePuntaje()) {
    auto puntaje = cPelicula->mostrarPuntaje();
    cPelicula->modificarPuntajePelicula(5);
  } else {
    cPelicula->ingresarPuntaje(10);
  }
   */

  // Comentar Pelicula
  /*
  manejadorPelicula->agregarPelicula(pelicula);
  manejadorPelicula->agregarPelicula(pelicula1);
  manejadorPelicula->agregarPelicula(pelicula2);
  auto dtPeliculas2 = cPelicula->obtenerPeliculas();
  cPelicula->eligePelicula("Scream");
  cPelicula->agregarComentarioPelicula("Hola");
  cPelicula->agregarComentarioPelicula("Hola");
  cPelicula->eligeComentario(0);
  cPelicula->respondeComentarioPelicula("soy Mathias");
  cPelicula->eligeComentario(1);
  cPelicula->respondeComentarioPelicula("soy");
  cPelicula->eligeComentario(3);
  cPelicula->respondeComentarioPelicula("Ramiro");
  auto comentarios = cPelicula->obtenerComentariosPelicula();
  vector<DtComentario> dtComentarios;
  cPelicula->obtenerDtComentariosPelicula(comentarios, dtComentarios, 0);
   */
  /*for(auto comentario : dtComentarios){
    cout << comentario;
  }
   */
  /*
  cPelicula->eligePelicula("Scream");
  cPelicula->agregarComentarioPelicula("Mariano");
  cPelicula->eligeComentario(5);
  cPelicula->respondeComentarioPelicula("puto");
  comentarios = cPelicula->obtenerComentariosPelicula();
  cPelicula->obtenerDtComentariosPelicula(comentarios, dtComentarios, 0);
   */
  /*for(auto comentario : dtComentarios){
    cout << comentario;
  }
   */

  /*
  // Mostrar Comentarios y Puntajes de Pelicula
  cPelicula->obtenerPeliculas();
  cPelicula->eligePelicula("Scream");
  auto dtInfoPeli = cPelicula->crearDtInfoPeli();
  cout << dtInfoPeli;

  // Eliminar Pelicula
  auto titulos = cPelicula->obtenerTitulosPeliculas();
  cPelicula->eligePelicula("Scream");
  cPelicula->eliminarPelicula();
   */

  int opc;
  do {
    showMenu();
    opc = getOpc(0, 11);
    int opcion;
    auto uFactory = CUsuarioFactory::getInstance();
    auto cFactory = CCineFactory::getInstancia();
    auto pFactory = CPeliculaFactory::getInstance();
    auto uInterface = uFactory->getIUsuario();
    auto cInterface = cFactory->getICine();
    auto pInterface = pFactory->getIPelicula();
    switch (opc) {
    case 1: { /// OPCION Iniciar Sesión
      string nickname, contrasenia;
      cout << "Ingrese su nickname:\n";
      cin >> nickname;
      uInterface->ingresaNick(nickname);
      cout << "Ingrese su contraseña:\n";
      cin >> contrasenia;
      try {
        if (!uInterface->ingresaPass(contrasenia)) {
          bool correcta = false;
          while (!correcta) {
            cout << "Contraseña incorrecta, desea reintentar?\n1-Si\n2-No";
            opcion = getOpc(0, 1);
            if (opcion == 1) {
              cout << "Ingrese su contraseña:\n";
              cin >> contrasenia;
              correcta = uInterface->ingresaPass(contrasenia);
            } else {
              correcta = true;
            }
          }
        } else {
          cout << "Se inicio la sesion correctamente.\n";
          cout << "Bienvenido " << nickname << endl;
        }
      } catch (invalid_argument &e) {
        cout << e.what() << endl;
      }
      break;
    }
    case 2: { /// OPCION Alta Cine
      if (uInterface->estaLogeado()) {
        if (uInterface->esAdmin()) {
          string calle;
          int numero, capacidad, opcion;
          bool deseeCine = true;
          while (deseeCine) {
            bool desee = true;
            cout << "Ingrese la direccion del cine a registrar.\n";
            cout << "Calle:" << endl;
            cin >> calle;
            cout << "Numero:" << endl;
            cin >> numero;
            auto dtDireccion = DtDireccion(calle, numero);
            cInterface->ingresaDireccion(dtDireccion);
            try {
              while (desee) {
                cout << "Ingrese la capacidad de la sala.\n";
                cin >> capacidad;
                cInterface->ingresaSala(capacidad);
                cout << "Desea agregar otra sala?\n1-Si\n2-No\n";
                opcion = getOpc(1, 2);
                if (opcion == 2) {
                  desee = false;
                }
              }
              cout << "Desea dar de alta el cine?\n1-Si\n2-No\n";
              opcion = getOpc(1, 2);
              if (opcion == 1) {
                cInterface->crearCine();
                deseeCine = false;
                cout << "El cine se dio de alta correctamente" << endl;
              } else {
                cout << "Desea agregar otro cine?\n1-Si\n2-No\n";
                opcion = getOpc(1, 2);
                if (opcion == 2) {
                  deseeCine = false;
                }
              }
            } catch (invalid_argument &e) {
              cout << e.what() << endl;
            }
          }
        } else {
          cout << "Se necesita ser administrador para dar de alta un cine"
               << endl;
        }
      } else {
        cout << "Se necesita iniciar sesion para dar de alta un cine" << endl;
      }
      break;
    }

    case 3: { /// OPCION Alta Función
      if (uInterface->estaLogeado()) {
        if (uInterface->esAdmin()) {
          bool desee = true;
          auto dtPeliculas = pInterface->obtenerPeliculas();
          cout << dtPeliculas;
          try {
            cout << "Elija el titulo de la pelicula a la que le desea "
                    "agregar una funcion"
                 << endl;
            string titulo;
            cin >> titulo;
            pInterface->eligePelicula(titulo);
          } catch (invalid_argument &e) {
            cout << e.what() << endl;
          }
          auto dtCines = cInterface->obtenerCines();
          while (desee) {
            cout << dtCines;
            cout << "Elija el ID del cine al que le desea agregar una funcion" << endl;
            int cine;
            cin >> cine;
            cInterface->eligeCine(cine);
            auto dtSalas = cInterface->obtenerDtSalas();
            for (auto dtSala : dtSalas) {
              cout << dtSala;
            }
            cout << "Elija el ID de la sala a la que le desea agregar una funcion"
                 << endl;
            int sala;
            cin >> sala;
            cInterface->eligeSala(sala);
            cout << "Ingrese la fecha de la funcion." << endl;
            int anio;
            cout << "Año:" << endl;
            cin >> anio;
            int mes;
            cout << "Mes:" << endl;
            cin >> mes;
            int dia;
            cout << "Dia:" << endl;
            cin >> dia;
            auto fecha = DtFecha(dia, mes, anio);
            cout << "Ingrese el horario de la funcion (ej: 20:00)" << endl;
            string horaInicio;
            cout << "HoraInicio:" << endl;
            cin >> horaInicio;
            string horaFin;
            cout << "HoraFin:" << endl;
            cin >> horaFin;
            auto horario = DtHorario(horaInicio, horaFin);
            float precio;
            cout << "Ingrese el precio para la funcion" << endl;
            cin >> precio;
            pInterface->crearFuncion(fecha, horario, precio);
            cout << "Se creo la funcion correctamente." << endl;
            cout << "Desea agregar otra funcion?\n1-Si\n2-No\n";
            opcion = getOpc(1, 2);
            if (opcion == 2) {
              desee = false;
            }
          }
        }
      }
      break;
    }
    case 4: { /// OPCION Crear Reserva
      if (uInterface->estaLogeado()) {
        bool desee = true;
        while (desee) {
          auto titulos = pInterface->obtenerTitulosPeliculas();
          for (auto titulo : titulos) {
            cout << titulo << endl;
          }
          string titulo;
          cout << "Elija el titulo de la pelicula o ingrese 1 para salir"
               << endl;
          cin >> titulo;
          if (titulo.compare("1") != 0) {
            try {
              pInterface->eligePelicula(titulo);
              auto dtPelicula = pInterface->mostrarPelicula();
              cout << dtPelicula;
              cout << "Desea ver información adicional de la "
                      "pelicula?\n1-Si\n2-No\n";
              int opcion;
              opcion = getOpc(1, 2);
              if (opcion == 1) {
                auto dtCines = pInterface->verInfoAdicional();
                cout << dtCines;
                cout << "Elija el cine o ingrese -1 para salir:\n";
                int cine;
                cin >> cine;
                if (cine != -1) {
                  auto dtFunciones = pInterface->eligeCine(cine);
                  cout << dtFunciones;
                  cout << "Desea elegir otra pelicula?\n1-Si\n2-No\n";
                  int opcion;
                  opcion = getOpc(1, 2);
                  if (opcion == 2) {
                    int funcion;
                    cout << "Elija la funcion que desee:\n";
                    cin >> funcion;
                    pInterface->seleccionaFuncion(funcion);
                    cout << "Ingrese la cantidad de asientos a reservar:\n";
                    int cantAsientos;
                    cin >> cantAsientos;
                    pInterface->ingresaCantEntradas(cantAsientos);
                    cout << "Ingrese el modo de pago:\n1-Debito\n2-Credito\n";
                    int opcion;
                    float precioTotal;
                    opcion = getOpc(1, 2);
                    if (opcion == 1) {
                      string banco;
                      cout << "Ingrese el nombre del banco:\n";
                      cin >> banco;
                      pInterface->ingresarBanco(banco);
                      precioTotal = pInterface->obtenerPrecioDebito();
                      cout << "El precio total de la reserva es: "
                           << precioTotal << endl;
                    } else {
                      string financiera;
                      cout << "Ingrese el nombre de la financiera:\n";
                      cin >> financiera;
                      float descuento =
                          pInterface->ingresarFinanciera(financiera);
                      if (descuento > 0) {
                        cout << "Su descuento para esa financiera es: "
                             << descuento << endl;
                      } else {
                        cout << "Esa financiera no tiene descuento:\n";
                      }
                      precioTotal = pInterface->obtenerPrecioCredito(descuento);
                      cout << "El precio total de la reserva es: "
                           << precioTotal << endl;
                    }
                    cout << "Desea confirmar su reserva?\n1-Si\n2-No\n";
                    int confirmar;
                    confirmar = getOpc(1, 2);
                    if (confirmar == 1) {
                      if (opcion == 1) {
                        pInterface->crearReservaDebito(precioTotal);
                        desee = false;
                      } else {
                        pInterface->crearReservaCredito(precioTotal);
                        desee = false;
                      }
                    } else {
                      desee = false;
                    }
                  } else {
                    desee = false;
                  }
                } else {
                  desee = false;
                }
              }
            } catch (invalid_argument &e) {
              cout << e.what() << endl;
            }
          } else {
            desee = false;
          }
        }
      }
      break;
    }
    case 5: { /// OPCION Puntuar Película
      if (uInterface->estaLogeado()) {
        auto dtPeliculas = pInterface->obtenerPeliculas();
        cout << dtPeliculas;
        cout << "Elija el titulo de la pelicula:\n";
        string titulo;
        cin >> titulo;
        try {
          pInterface->eligePelicula(titulo);
          if (pInterface->existePuntaje()) {
            int puntaje = pInterface->mostrarPuntaje();
            cout << puntaje << endl;
            cout << "Desea modificar su puntaje?\n1-Si\n2-No\n";
            int opcion;
            opcion = getOpc(1, 2);
            if (opcion == 1) {
              int puntaje;
              cout << "Ingrese el puntaje:\n";
              cin >> puntaje;
              pInterface->modificarPuntajePelicula(puntaje);
            }
          } else {
            int puntaje;
            cout << "Ingrese el puntaje:\n";
            cin >> puntaje;
            pInterface->ingresarPuntaje(puntaje);
          }
        } catch (invalid_argument &e) {
          cout << e.what() << endl;
        }
      }
      break;
    }
    case 6: { /// OPCION Comentar Película
      if (uInterface->estaLogeado()) {
        auto dtPeliculas = pInterface->obtenerPeliculas();
        cout << dtPeliculas;
        cout << "Elija el titulo de la pelicula:\n";
        string titulo;
        cin >> titulo;
        try {
          pInterface->eligePelicula(titulo);
          auto comentarios = pInterface->obtenerComentariosPelicula();
          vector<DtComentario> dtComentarios;
          pInterface->obtenerDtComentariosPelicula(comentarios, dtComentarios,
                                                   0);
          for (auto dtComentario : dtComentarios) {
            cout << dtComentario;
          }
          bool desee = true;
          while (desee) {
            cout << "1- Realizar nuevo comentario" << endl;
            cout << "2- Responder comentario" << endl;
            int opcion;
            opcion = getOpc(1, 2);
            if (opcion == 1) {
              string comentario;
              cout << "Ingrese su comentario:\n";
              cin >> comentario;
              pInterface->agregarComentarioPelicula(comentario);
            } else {
              int idComentario;
              cout << "Seleccione el comentario al cual quiere responder:\n";
              cin >> idComentario;
              pInterface->eligeComentario(idComentario);
              string comentario;
              cout << "Ingrese su comentario:\n";
              cin >> comentario;
              pInterface->agregarComentarioPelicula(comentario);
            }
            cout << "Desea agregar otro comentario?\n1-Si\n2-No\n";
            int confirmar;
            confirmar = getOpc(1, 2);
            if (confirmar == 2) {
              desee = false;
            }
          }
        } catch (invalid_argument &e) {
          cout << e.what() << endl;
        }
      }
      break;
    }
    case 7: { /// OPCION Eliminar Película
      if (uInterface->estaLogeado()) {
        if (uInterface->esAdmin()) {
          auto titulos = pInterface->obtenerTitulosPeliculas();
          for (auto titulo : titulos) {
            cout << titulo << endl;
          }
          string titulo;
          cout << "Elija el titulo de la pelicula:\n";
          cin >> titulo;
          pInterface->eligePelicula(titulo);
          cout << "Desea eliminar la pelicula?\n1-Si\n2-No";
          int opcion;
          opcion = getOpc(1, 2);
          if (opcion == 1) {
            pInterface->eliminarPelicula();
          }
        }
      }
      break;
    }
    case 8: { /// OPCION Ver Información de Película
      if (uInterface->estaLogeado()) {
        bool desee = true;
        while (desee) {
          auto titulos = pInterface->obtenerTitulosPeliculas();
          for (auto titulo : titulos) {
            cout << titulo << endl;
          }
          string titulo;
          cout << "Elija el titulo de la pelicula o ingrese 1 para salir"
               << endl;
          cin >> titulo;
          if (titulo.compare("1") != 0) {
            try {
              pInterface->eligePelicula(titulo);
              auto dtPelicula = pInterface->mostrarPelicula();
              cout << dtPelicula;
              cout << "Desea ver información adicional de la "
                      "pelicula?\n1-Si\n2-No\n";
              int opcion;
              opcion = getOpc(1, 2);
              if (opcion == 1) {
                auto dtCines = pInterface->verInfoAdicional();
                cout << dtCines;
                cout << "Elija el cine o ingrese -1 para salir:\n";
                int cine;
                cin >> cine;
                if (cine != -1) {
                  auto dtFunciones = pInterface->eligeCine(cine);
                  cout << dtFunciones;
                  cout << "Desea elegir otra pelicula?\n1-Si\n2-No\n";
                } else {
                  desee = false;
                }
              } else {
                desee = false;
              }
            } catch (invalid_argument &e) {
              cout << e.what() << endl;
            }
          } else {
            desee = false;
          }
        }
      }
      break;
    }
    case 9: { /// OPCION Ver Comentarios y Puntajes de Película
      if (uInterface->estaLogeado()) {
        auto dtPeliculas = pInterface->obtenerPeliculas();
        for (auto dtPelicula : dtPeliculas) {
          cout << "Titulo: " << dtPelicula.getTitulo() << endl;
          cout << "Poster: " << dtPelicula.getPoster() << endl;
        }
        string titulo;
        cout << "Elija el titulo de la pelicula:\n";
        cin >> titulo;
        try {
          pInterface->eligePelicula(titulo);
          auto dtInfoPeli = pInterface->crearDtInfoPeli();
          cout << dtInfoPeli;
        } catch (invalid_argument &e) {
          cout << e.what() << endl;
        }
      }
      break;
    }

    case 10: { /// OPCION SET HORA RELOJ
      int anio, mes, dia, hora, minuto;
      cout << "Ingrese la Fecha y Hora para el sistema" << endl;
      cout << "Año: " << endl;
      cin >> anio;
      cout << "Mes: " << endl;
      cin >> mes;
      cout << "Dia: " << endl;
      cin >> dia;
      cout << "Hora: " << endl;
      cin >> hora;
      cout << "Minuto: " << endl;
      cin >> minuto;
      auto dtFechaHora = DtFechaHora(anio, mes, dia, hora, minuto);
      uInterface->setHoraReloj(dtFechaHora);
      cout << "La hora se cambio correctamente" << endl;
      break;
    }
    case 11: { /// OPCION SALIR
      auto mu = uInterface->obtenerManejadorUsuario();
      Usuario *usuario1 = new Usuario("admin", "admin", "Administrador", true);
      mu->agregarUsuario(usuario1);
      Usuario *usuario2 = new Usuario("Mathias", "123", "Usuario", false);
      mu->agregarUsuario(usuario2);
      auto mf = pInterface->obtenerManejadorFinanciera();
      Financiera *financiera1 = new Financiera("VISA", 20);
      mf->agregarFinanciera(financiera1);
      Financiera *financiera2 = new Financiera("OCA", 0);
      mf->agregarFinanciera(financiera2);
      Financiera *financiera3 = new Financiera("PRONTO", 50);
      mf->agregarFinanciera(financiera3);
      auto mp = pInterface->obtenerManejadorPelicula();
      Pelicula *pelicula1 = new Pelicula("Rey Leon", "Es de un leon re cool", 20 , "foto.jpg");
      mp->agregarPelicula(pelicula1);
      Pelicula *pelicula2 = new Pelicula("Scream ", "wasaaaaaa", 40 , "foto.jpg");
      mp->agregarPelicula(pelicula2);
      Pelicula *pelicula3 = new Pelicula("Cars", "ma o meno", 10 , "foto.jpg");
      mp->agregarPelicula(pelicula3);
      cout << "Se cargaron los datos correctamente" << endl;
      break;
    }
    case 0: { /// OPCION SALIR
      cout << "Hasta la proxima\n";
      break;
    }
    default: { /// DEFAULT
      cout << "Opción incorrecta\n\n";
    }
    }
  } while (opc != 0);
  return 0;
}
