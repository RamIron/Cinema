#ifndef PALAB06_CPELICULA_HH
#define PALAB06_CPELICULA_HH

#include "../Clases/Financiera.hh"
#include "../Clases/Funcion.hh"
#include "../Clases/Pelicula.hh"
#include "../Clases/Sesion.hh"
#include "../Datatypes/DtCine.hh"
#include "../Datatypes/DtDireccion.hh"
#include "../Datatypes/DtFecha.hh"
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
  int funcion;
  DtCine cine;
  int idComentario;
  Sesion *sesion = Sesion::getInstance();
  Pelicula *pelicula;

  CPelicula();

public:
  static CPelicula *getInstance();

  vector<string> obtenerTitulosPeliculas();

  vector<DtPelicula> obtenerPeliculas();

  void eligePelicula(string titulo);

  DtPelicula mostrarPelicula(); // Retorna la pelicula de eligePelicula()

  void ingresarPuntaje(int puntuacion);

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

  void crearFuncion(DtFecha fecha, DtHorario horario, float precio);

  void seleccionaFuncion(int id);

  vector<DtFuncion> eligeCine(int numero);

  float obtenerPrecioDebito();

  float obtenerPrecioCredito(float descuento);

  void removerFuncionSala(int id);

  vector<DtFuncion> obtenerFunciones();

  DtFuncion obtenerFuncionSala();

  vector<DtCine> verInfoAdicional();

  friend bool operator>(DtFechaHora funcion, DtFechaHora sistema);

  bool existePuntaje();

  int mostrarPuntaje();

  void modificarPuntajePelicula(int puntajeNuevo);

  void agregarComentarioPelicula(string comentario);

  map<int, Comentario *> obtenerComentariosPelicula();

  void obtenerDtComentariosPelicula(map<int, Comentario *> comentarios,
                                    vector<DtComentario> &dtComentarios,
                                    int profundidad);

  void respondeComentarioPelicula(string comentario);

  DtInfoPeli crearDtInfoPeli();

  ~CPelicula();
};

#endif
