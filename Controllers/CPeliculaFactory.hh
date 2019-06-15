#ifndef PALAB06_CPELICULAFACTORY_HH
#define PALAB06_CPELICULAFACTORY_HH

#include "CPelicula.hh"
#include "IPelicula.hh"

class CPeliculaFactory {
private:
  static CPeliculaFactory *pfInstance;

  CPeliculaFactory();

public:
  static CPeliculaFactory *getInstance();

  IPelicula *getIPelicula();

  ~CPeliculaFactory();
};

#endif
