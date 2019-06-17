#ifndef PALAB06_CPELICULA_HH
#define PALAB06_CPELICULA_HH

#include "../Clases/Financiera.hh"
#include "../Clases/Funcion.hh"
#include "../Clases/Pelicula.hh"
#include "../Clases/Sesion.hh"
#include "../Datatypes/DtCine.hh"
#include "../Datatypes/DtDireccion.hh"
#include "../Datatypes/DtFechaHora.hh"
#include "../Datatypes/DtFuncion.hh"
#include "../Datatypes/DtHorario.hh"
#include "../Datatypes/DtPelicula.hh"
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
  Pelicula *pelicula;

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

  void crearReservaCredito(float costo);

  void crearReservaDebito(float costo);

  void ingresarBanco(string banco);

  float ingresarFinanciera(string financiera);

  void ingresaCantEntradas(int cantEntradas);

  void crearFuncion(DtFechaHora fecha, DtHorario horario, float precio);

  void seleccionaFuncion(int id);

  vector<DtFuncion> eligeCine(int numero);

  float obtenerPrecioDebito();

  float obtenerPrecioCredito(float descuento);

  void removerFuncionSala(int id);

  vector<DtFuncion> obtenerFunciones();

  DtFuncion obtenerFuncionSala();

  vector<DtCine> verInfoAdicional();

  friend bool operator>(DtFechaHora funcion, DtFechaHora sistema);

  ~CPelicula();
};

#endif
