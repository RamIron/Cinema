#include "CPelicula.hh"
CPelicula* CPelicula::cpelicula = NULL;

CPelicula::CPelicula(){}

CPelicula* CPelicula::getInstance()
{
    if (this->cpelicula == NULL)
    {
        cpelicula = new CPelicula();
    }
    return cpelicula;
}

vector<string> obtenerTitulosPeliculas(){}
vector<DtPelicula> obtenerPeliculas(){}
void eligePelicula(string titulo){}
DtPelicula mostrarPelicula() //Retorna la pelicula de eligePelicula()
{

}
void CPelicula::ingresarPuntaje(int puntuacion){}
void CPelicula::modificarPuntaje(int puntuacion){}
void CPelicula::creaComentario(string comentario){}
void CPelicula::eligeComentario(int id){}
void CPelicula::respondeComentario(string comentario){}
void CPelicula::finalizar(){}
void CPelicula::eliminarPelicula(){}
void CPelicula::cancelarReserva(){}
void CPelicula::crearReserva(){}
void CPelicula::ingresarBanco(string banco){}
float CPelicula::ingresarFinanciera(string financiera){}
void CPelicula::ingresaCantEntradas(int cantEntradas){}
void CPelicula::crearFuncion(DtFecha fecha, DtHorario horario){}
void CPelicula::seleccionaFuncion(int id){}
void CPelicula::eligeCine(int numero){}
float CPelicula::obtenerPrecio(){}
void CPelicula::removerFuncionSala(int id){}
vector<DtFuncion> CPelicula::obtenerFunciones(){}
DtFuncion CPelicula::obtenerFuncionSala(){}