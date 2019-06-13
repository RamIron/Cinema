#include "CUsuario.hh"

CUsuario* CUsuario::cusuario = NULL;

CUsuario::Sesion(){}

CUsuario* CUsuario::getInstance()
{
    if (this->cusuario == NULL)
    {
        cusuario = new CUsuario();
    }
    return cusuario;
}

void CUsuario::ingresaNick(string nickname);

bool CUsuario::ingresaPass(string contrasenia);
