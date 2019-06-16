#ifndef PALAB06_DTFECHAHORA_HH
#define PALAB06_DTFECHAHORA_HH

class DtFechaHora{
private:
    int anio;
    int mes;
    int dia;
    int hora;
    int minuto;
    int segundo;
public:
    DtFechaHora();
    DtFechaHora(int a, int m, int d, int h, int mi, int s); // anio, mes, hora, minuto, segundo
    int getAnio();
    int getMes();
    int getDia();
    int getHora();
    int getMinuto();
    int getSegundo();
    ~DtFechaHora();
};

#endif
















#endif //PALAB06_DTFECHAHORA_HH
