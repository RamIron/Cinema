#ifndef PALAB06_MANEJADORPELICULA_HH
#define PALAB06_MANEJADORPELICULA_HH

#include "../Clases/Pelicula.hh"
#include <map>

using namespace std;

class ManejadorPelicula {
private:
  static ManejadorPelicula *mpInstance;
  map<string, Pelicula *> peliculas;

  ManejadorPelicula();

public:
  static ManejadorPelicula *getInstance();

  map<string, Pelicula *> obtenerPeliculas();

  Pelicula *obtenerPelicula(string titulo);

  void agregarPelicula(Pelicula *);

  bool existePelicula(string titulo);

  void eliminarPelicula(string titulo);

  ~ManejadorPelicula();
};

#endif
