#include "Factory.hh"
#include "CCine.hh"
#include "CPelicula.hh"
#include "CUsuario.hh"

Factory *Factory::cfInstance = NULL;

Factory::Factory() {}

Factory *Factory::getInstancia() {
  if (cfInstance == NULL)
    cfInstance = new Factory();
  return cfInstance;
}

ICine *Factory::getICine() {
  ICine *iCine = CCine::getInstance();
  return iCine;
}

IUsuario *Factory::getIUsuario() {
  IUsuario *iUsuario = CUsuario::getInstance();
  return iUsuario;
}

IPelicula *Factory::getIPelicula() {
  IPelicula *iPelicula = CPelicula::getInstance();
  return iPelicula;
}

Factory::~Factory() {}
