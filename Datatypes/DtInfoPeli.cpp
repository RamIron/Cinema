#include "DtInfoPeli.hh"

/*Constructor sin parametros*/
DtInfoPeli::DtInfoPeli() {}

/*Constructor con parametros*/
DtInfoPeli::DtInfoPeli(string titulo, float puntajePromedio, int cantPuntajes,
                       vector<DtComentario> comentarios,
                       vector<DtPuntaje> puntajes) {
  this->titulo = titulo;
  this->puntajePromedio = puntajePromedio;
  this->cantPuntajes = cantPuntajes;
  this->comentarios = comentarios;
  this->puntajes = puntajes;
}

/*Getters*/

string DtInfoPeli::getTitulo() const { return this->titulo; }

float DtInfoPeli::getPuntajePromedio() const { return this->puntajePromedio; }

int DtInfoPeli::getCantPuntajes() const { return this->cantPuntajes; }

vector<DtComentario> DtInfoPeli::getComentarios() { return this->comentarios; }

vector<DtPuntaje> DtInfoPeli::getPuntajes() { return this->puntajes; }

std::ostream &operator<<(std::ostream &output, DtInfoPeli &dtInfoPeli) {
  output << dtInfoPeli.getTitulo() << std::endl
         << "Puntaje Promedio: " << dtInfoPeli.getPuntajePromedio() << "("
         << dtInfoPeli.getPuntajes().size() << " usuarios)" << std::endl
         << "Comentarios" << std::endl;

  for (auto dtComentario : dtInfoPeli.getComentarios()) {
    output << dtComentario;
  }
  output << "Puntajes" << std::endl;
  for (auto dtPuntaje : dtInfoPeli.getPuntajes()) {
    output << dtPuntaje.getNickname() << ":" << dtPuntaje.getPuntuacion()
           << std::endl;
  }
  return output;
}

/*Destructor*/
DtInfoPeli::~DtInfoPeli() {}
