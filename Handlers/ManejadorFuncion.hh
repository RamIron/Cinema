#ifndef PALAB06_MANEJADORFUNCION_HH
#define PALAB06_MANEJADORFUNCION_HH

#include "../Clases/Funcion.hh"
#include <map>

using namespace std;

class ManejadorFuncion {
private:
    static ManejadorFuncion *mfInstance;
    map<int, Funcion *> funciones;

    ManejadorFuncion();

public:
    static ManejadorFuncion *getInstance();

    map<int, Funcion *> obtenerFunciones();

    Funcion *obtenerFuncion(int id);

    void agregarFuncion(Funcion *);

    bool existeFuncion(int id);

    void eliminarFuncion(int id);

    ~ManejadorFuncion();
};

#endif
