#include "CCineFactory.hh"

CineFactory* CineFactory::instancia = NULL;

CineFactory::CineFactory(){}

CineFactory* CineFactory::getInstancia(){
    if (instancia == NULL)
        instancia = new CineFactory();
    return instancia;
}

ICine* CineFactory::getICine(){
  ICine* cont = CCine::getInstance();
  return cont;
}
