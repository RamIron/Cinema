#ifndef PALAB06_CPELICULA_HH
#define PALAB06_CPELICULA_HH

#include "../Clases/Financiera.hh"
#include "../Clases/Funcion.hh"
#include "../Clases/Sesion.hh"
#include "../Datatypes/DtCine.hh"
#include "../Datatypes/DtDireccion.hh"
#include "../Datatypes/DtFecha.hh"
#include "../Datatypes/DtFuncion.hh"
#include "../Datatypes/DtHorario.hh"
#include "../Datatypes/DtPelicula.hh"
#include "../Clases/Pelicula.hh"
#include "IPelicula.hh"
#include <iostream>
#include <map>
#include <string>
#include <vector>

class CPelicula : public IPelicula {
private:
  static CPelicula *cpInstance;
  int cantEntradas;
  string banco;
  string financiera;
  string titulo;
  int funcion;
  DtCine cine;
  // DtSala sala;
  int idComentario;
  Sesion *sesion;
  map<string, Pelicula *> mapOfPeliculas;
  map<int, Funcion *> mapOfFunciones;
  map<string, Financiera *> mapOfFinancieras;

  CPelicula();

public:
  static CPelicula *getInstance();

  vector<string> obtenerTitulosPeliculas();

  vector<DtPelicula> obtenerPeliculas();

  void eligePelicula(string titulo);

  DtPelicula mostrarPelicula(); // Retorna la pelicula de eligePelicula()

  void ingresarPuntaje(int puntuacion);

  void modificarPuntaje(int puntuacion);

  void creaComentario(string comentario);

  void eligeComentario(int id);

  void respondeComentario(string comentario);

  void finalizar();

  void eliminarPelicula();

  void cancelarReserva();

  void crearReserva();

  void ingresarBanco(string banco);

  float ingresarFinanciera(string financiera);

  void ingresaCantEntradas(int cantEntradas);

  void crearFuncion(DtFecha fecha, DtHorario horario);

  void seleccionaFuncion(int id);

  void eligeCine(int numero);

  float obtenerPrecio();

  void removerFuncionSala(int id);

  vector<DtFuncion> obtenerFunciones();

  DtFuncion obtenerFuncionSala();

  ~CPelicula();
};

#endif
