#ifndef PALAB06_IPELICULA_HH
#define PALAB06_IPELICULA_HH

#include <iostream>

using namespace std;

class IPelicula{
    public:
      virtual vector<string> obtenerTitulosPeliculas() = 0;
      virtual vector<DtPelicula> obtenerPeliculas() = 0;
      virtual void eligePelicula(string titulo) = 0;
      virtual DtPelicula mostrarPelicula() = 0; //Retorna la pelicula de eligePelicula()
      virtual void ingresarPuntaje(int puntuacion) = 0;
      virtual void modificarPuntaje(int puntuacion) = 0;
      virtual void creaComentario(string comentario) = 0;
      virtual void eligeComentario(int id) = 0;
      virtual void respondeComentario(string comentario) = 0;
      virtual void finalizar() = 0;
      virtual void eliminarPelicula() = 0;
      virtual void cancelarReserva() = 0;
      virtual void crearReserva() = 0;
      virtual void ingresarBanco(string banco) = 0;
      virtual float ingresarFinanciera(string financiera) = 0;
      virtual void ingresaCantEntradas(int cantEntradas) = 0;
      virtual void crearFuncion(DtFecha fecha, DtHorario horario) = 0;
      virtual void seleccionaFuncion(int id) = 0;
      virtual void eligeCine(int numero) = 0;
      virtual float obtenerPrecio() = 0;
      virtual void removerFuncionSala(int id) = 0;
      virtual vector<DtFuncion> obtenerFunciones() = 0;
      virtual DtFuncion obtenerFuncionSala() = 0;
};

#endif
