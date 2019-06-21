#ifndef PALAB06_IPELICULA_HH
#define PALAB06_IPELICULA_HH

#include "../Datatypes/DtCine.hh"
#include "../Datatypes/DtFechaHora.hh"
#include "../Datatypes/DtFuncion.hh"
#include "../Datatypes/DtHorario.hh"
#include "../Datatypes/DtPelicula.hh"
#include <iostream>
#include <vector>

using namespace std;

class IPelicula {
public:
  virtual vector<string> obtenerTitulosPeliculas() = 0;

  virtual vector<DtPelicula> obtenerPeliculas() = 0;

  virtual void eligePelicula(string titulo) = 0;

  virtual DtPelicula
  mostrarPelicula() = 0; // Retorna la pelicula de eligePelicula()

  virtual void ingresarPuntaje(int puntuacion) = 0;

  virtual void modificarPuntajePelicula(int puntuacion) = 0;

  virtual void creaComentario(string comentario) = 0;

  virtual void eligeComentario(int id) = 0;

  virtual void respondeComentario(string comentario) = 0;

  virtual void finalizar() = 0;

  virtual void eliminarPelicula() = 0;

  virtual void crearReservaDebito(float costo) = 0;

  virtual void crearReservaCredito(float costo) = 0;

  virtual void ingresarBanco(string banco) = 0;

  virtual float ingresarFinanciera(string financiera) = 0;

  virtual void ingresaCantEntradas(int cantEntradas) = 0;

  virtual void crearFuncion(DtFecha fecha, DtHorario horario, float precio) = 0;

  virtual void seleccionaFuncion(int id) = 0;

  virtual vector<DtFuncion> eligeCine(int numero) = 0;

  virtual float obtenerPrecioCredito(float descuento) = 0;

  virtual float obtenerPrecioDebito() = 0;

  virtual void removerFuncionSala(int id) = 0;

  virtual vector<DtFuncion> obtenerFunciones() = 0;

  virtual DtFuncion obtenerFuncionSala() = 0;

  virtual vector<DtCine> verInfoAdicional() = 0;
};

#endif
