#include "Main.hh"

#include <iostream>

using namespace std;

int main() {
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
      cout << "Elija el titulo de la pelicula a la que desea agregar funciones:\n";
      cout << "Elija el id del cine que desee:\n";
      cout << "Elija la sala:\n";
      cout << "Ingrese la fecha:\n"; 
      cout << "Ingrese el horario de comienzo:\n";
      cout << "Ingrese el horario de fin:\n"; 
      cout << "Desea agregar otra funcion?\n"; 
      break;

    case 4: /// OPCION Crear Reserva
      /// ///////////////////////////////////////////////////////
      cout << "Elija el titulo de la pelicula o escriba 'cancelarReserva' para salir:\n";
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
      cout << "Elija el titulo de la pelicula o escriba 'cancelarVerInfo' para salir:\n";
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
/*
m = manejador
ingresarnick
        cin
m.ingresarnick(nick)
ingresapas
        cin
bool correcta = m.ingresarpass(contrasenia);
while(!correcta){
"desea cancelar o seguir intentando"
if(desea seguir){
ingresapass
        cin
correcta = m.ingresarpass(contrasenia);
}else{
llamo al menu
}
}
s = sesions.login()
/*