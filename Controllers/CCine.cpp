#include "CCine.hh"

CCine* CCine::ccine = NULL;

CCine::CCine(){}

CCine* CCine::getInstance()
{
    if (this->ccine == NULL)
    {
        ccine = new CCine();
    }
    return ccine;
}

void CCine::ingresaDireccion(DtDireccion direccion);

void CCine::crearCine();

void CCine::cancelar();

void CCine::ingresaSala(int capacidad);
