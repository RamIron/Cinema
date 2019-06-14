#ifndef PALAB06_CPELICULAFACTORY_HH
#define PALAB06_CPELICULAFACTORY_HH
#include "IPelicula.hh"
#include "CPelicula.hh"
class PeliculaFactory{
    private:
        static PeliculaFactory* instancia;
        PeliculaFactory();
    public:
        static PeliculaFactory* getInstancia();
        IPelicula* getIPelicula();
};
#endif
