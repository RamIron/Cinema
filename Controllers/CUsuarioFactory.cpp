#include "CUsuarioFactory.hh"

UsuarioFactory* UsuarioFactory::instancia = NULL;

CUsuarioFactory::CUsuarioFactory(){}

UsuarioFactory* CUsuarioFactory::getInstancia(){
    if (instancia == NULL)
        instancia = new UsuarioFactory();
    return instancia;
}

IUsuario* CUsuarioFactory::getIPelicula(){
    return new CUsuario();
}

CUsuarioFactory::~CUsuarioFactory(){}
