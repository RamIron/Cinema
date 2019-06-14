#ifndef PALAB06_CUSUARIOFACTORY_HH
#define PALAB06_CUSUARIOFACTORY_HH
#include "IUsuario.hh"
#include "CUsuario.hh"

class UsuarioFactory{
    private:
        static UsuarioFactory* instancia;
        UsuarioFactory();
    public:
        static UsuarioFactory* getInstancia();
        IUsuario* getIUsuario();
};

#endif
