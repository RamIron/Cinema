#ifndef PALAB06_CCINEFACTORY_HH
#define PALAB06_CCINEFACTORY_HH

#include "ICine.hh"
#include "IPelicula.hh"
#include "IUsuario.hh"

class Factory {
private:
  static Factory *cfInstance;
  Factory();

public:
  static Factory *getInstancia();

  ICine *getICine();

  IUsuario *getIUsuario();

  IPelicula *getIPelicula();

  ~Factory();
};

#endif
