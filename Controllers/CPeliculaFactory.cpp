#include "CPeliculaFactory.hh"

CPeliculaFactory *CPeliculaFactory::pfInstance = NULL;

CPeliculaFactory::CPeliculaFactory() {}

CPeliculaFactory *CPeliculaFactory::getInstance() {
  if (pfInstance == NULL)
    pfInstance = new CPeliculaFactory();
  return pfInstance;
}

IPelicula *CPeliculaFactory::getIPelicula() {
  IPelicula *iPelicula = CPelicula::getInstance();
  return iPelicula;
}

CPeliculaFactory::~CPeliculaFactory() {}
