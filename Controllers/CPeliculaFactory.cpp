#include "CPeliculaFactory.hh"

PeliculaFactory* PeliculaFactory::instancia = NULL;

PeliculaFactory::PeliculaFactory(){}

PeliculaFactory* PeliculaFactory::getInstancia(){
    if (instancia == NULL)
        instancia = new PeliculaFactory();
    return instancia;
}

IPelicula* PeliculaFactory::getIPelicula(){
  IPelicula* cont = CPelicula::getInstance();
  return cont;
}
