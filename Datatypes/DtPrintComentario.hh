#ifndef PALAB06_DTPRINTCOMENTARIO_HH
#define PALAB06_DTPRINTCOMENTARIO_HH

#include <iostream>

using namespace std;

class DtPrintComentario {
private:
    string nickname;
    int profundidad;
    string comentario;

public:
    /*Constructor sin parametros*/
    DtPrintComentario();

    /*Constructor con parametros*/
    DtPrintComentario(string nickname, int profundidad, string comentario);

    /*Getters*/
    string getNickname();

    int getProfundidad();

    string getComentario();

    /*Destructor*/
    ~DtPrintComentario();
};

#endif
