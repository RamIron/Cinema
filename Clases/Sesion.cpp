#include "Sesion.hh"

Sesion* Sesion::sesion = NULL;

Sesion* Sesion::getInstance()
{
    if (this->sesion == NULL)
    {
        sesion = new Sesion();
    }
    return sesion;
}

Sesion::Sesion(){}

void Sesion::login(string nickname, string contrasenia){}
