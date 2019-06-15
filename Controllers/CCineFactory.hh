#ifndef PALAB06_CCINEFACTORY_HH
#define PALAB06_CCINEFACTORY_HH

#include "CCine.hh"
#include "ICine.hh"

class CCineFactory {
private:
  static CCineFactory *cfInstance;
  CCineFactory();

public:
  static CCineFactory *getInstancia();

  ICine *getICine();

  ~CCineFactory();
};

#endif
