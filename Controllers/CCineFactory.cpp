#include "CCineFactory.hh"

CCineFactory *CCineFactory::cfInstance = NULL;

CCineFactory::CCineFactory() {}

CCineFactory *CCineFactory::getInstancia() {
  if (cfInstance == NULL)
    cfInstance = new CCineFactory();
  return cfInstance;
}

ICine *CCineFactory::getICine() {
  ICine *iCine = CCine::getInstance();
  return iCine;
}

CCineFactory::~CCineFactory() {}
