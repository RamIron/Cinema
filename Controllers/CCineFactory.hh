#ifndef PALAB06_CCINEFACTORY_HH
#define PALAB06_CCINEFACTORY_HH
#include "ICine.hh"
#include "CCine.hh"
class CineFactory{
    private:
        static CineFactory* instancia;
        CineFactory();
    public:
        static CineFactory* getInstancia();
        ICine* getICine();
};
#endif
