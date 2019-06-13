#include "CPeliculaFactory.hh"

PeliculaFactory* PeliculaFactory::instancia = NULL;

CPeliculaFactory::CPeliculaFactory(){}

PeliculaFactory* PeliculaFactory::getInstancia(){
    if (instancia == NULL)
        instancia = new PeliculaFactory();
    return instancia;
}

IPelicula* CPeliculaFactory::getIPelicula(){
    return new CPelicula();
}

CPeliculaFactory::~CPeliculaFactory(){}
