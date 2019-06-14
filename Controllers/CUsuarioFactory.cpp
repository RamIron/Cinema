#include "CUsuarioFactory.hh"

UsuarioFactory* UsuarioFactory::instancia = NULL;

UsuarioFactory::UsuarioFactory(){}

UsuarioFactory* UsuarioFactory::getInstancia(){
  if (instancia == NULL)
    instancia = new UsuarioFactory();
  return instancia;
}

IUsuario* UsuarioFactory::getIPelicula(){
  IUsuario* cont = CUsuario::getInstance();
  return cont;
}
