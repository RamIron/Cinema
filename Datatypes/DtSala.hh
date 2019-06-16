#ifndef PALAB06_DTSALA_HH
#define PALAB06_DTSALA_HH

class DtSala {
private:
    int id;
    int capacidad;

public:
    /*Constructor sin parametros*/
    DtSala();

    /*Constructor con parametros*/
    DtSala(int id, int capacidad);

    /*Getters*/
    int getid();

    int getCapacidad();

    /*Destructor*/
    ~DtSala();
};

#endif



