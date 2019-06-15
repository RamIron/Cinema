#ifndef PALAB06_MANEJADORCINE_HH
#define PALAB06_MANEJADORCINE_HH

#include "../Clases/Cine.hh"
#include <map>

using namespace std;

class ManejadorCine {
private:
    static ManejadorCine *mcInstance;
    map<int, Cine *> cines;

    ManejadorCine();

public:
    static ManejadorCine *getInstance();

    map<int, Cine *> obtenerCines();

    Cine *obtenerCine(int ind);

    void agregarCine(Cine *);

    bool existeCine(int id);

    void eliminarCine(int id);

    ~ManejadorCine();
};

#endif
