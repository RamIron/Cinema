#include "Pelicula.hh"
#include "../Handlers/ManejadorComentario.hh"
#include "../Handlers/ManejadorFuncion.hh"

// Constructores
Pelicula::Pelicula() {}

Pelicula::Pelicula(string titulo, string sinopsis, float puntajePromedio,
                   string poster) {
  this->titulo = titulo;
  this->sinopsis = sinopsis;
  this->puntajePromedio = puntajePromedio;
  this->poster = poster;
}

// Getters & Setters
string Pelicula::getTitulo() { return this->titulo; }

string Pelicula::getSinopsis() { return this->sinopsis; }

float Pelicula::getPuntajePromedio() {
  float puntajePromedio = 0;
  if (this->puntajes.size() != 0) {
    for (auto posPuntaje : this->puntajes) {
      puntajePromedio += posPuntaje.second->getPuntos();
    }
    return puntajePromedio / this->puntajes.size();
  } else {
    return puntajePromedio;
  }
}

string Pelicula::getPoster() { return this->poster; }

void Pelicula::setTitulo(string titulo) { this->titulo = titulo; }

void Pelicula::setSinopsis(string sinopsis) { this->sinopsis = sinopsis; }

void Pelicula::setPuntajePromedio(float puntajePromedio) {
  this->puntajePromedio = puntajePromedio;
}

void Pelicula::setPoster(string poster) { this->poster = poster; }

// Operaciones

void Pelicula::agregarFuncion(Funcion *funcion) {
  this->funciones.insert(make_pair(funcion->getId(), funcion));
}

bool Pelicula::existeFuncion(int idFuncion) {
  return this->funciones.find(idFuncion) != this->funciones.end();
}

void Pelicula::agregarCine(Cine *cine) {
  this->cines.insert(make_pair(cine->getId(), cine));
}

bool Pelicula::existeCine(int idCine) {
  return this->cines.find(idCine) != this->cines.end();
}

vector<DtCine> Pelicula::obtenerDtCines() {
  vector<DtCine> dtCines;
  for (auto posCine : this->cines) {
    DtCine dtCine =
        DtCine(posCine.second->getId(), posCine.second->getDireccion());
    dtCines.push_back(dtCine);
  }
  return dtCines;
}

Cine *Pelicula::obtenerCine(int idCine) {
  return this->cines.find(idCine)->second;
}

void Pelicula::agregarComentario(string comentario, Usuario *usuario) {
  auto c = new Comentario(comentario, usuario);
  this->comentarios.insert(make_pair(c->getId(), c));
  auto manejadorComentario = ManejadorComentario::getInstance();
  manejadorComentario->agregarComentario(c);
}

void Pelicula::obtenerDtComentarios(map<int, Comentario *> comentarios,
                                    vector<DtComentario> &dtComentarios,
                                    int profundidad) {
  for (auto posComentario : comentarios) {
    auto usuario = posComentario.second->getUsuario();
    auto dtComentario =
        DtComentario(posComentario.second->getId(), usuario->getNickname(),
                     posComentario.second->getTexto(), profundidad);
    dtComentarios.push_back(dtComentario);
    if (posComentario.second->getRespuestas().size() != 0) {
      obtenerDtComentarios(posComentario.second->getRespuestas(), dtComentarios,
                           profundidad + 1);
    }
  }
}

map<int, Comentario *> Pelicula::obtenerComentarios() {
  return this->comentarios;
}

void Pelicula::respondeComentario(int idComentario, string respuesta,
                                  Usuario *usuario) {
  auto manejadorComentario = ManejadorComentario::getInstance();
  auto cRespuesta = new Comentario(respuesta, usuario);
  auto comentario = manejadorComentario->obtenerComentario(idComentario);
  comentario->agregarRespuesta(cRespuesta);
  manejadorComentario->agregarComentario(cRespuesta);
}

void Pelicula::agregarPuntaje(Puntaje *puntaje) {
  this->puntajes.insert(
      make_pair(puntaje->getUsuario()->getNickname(), puntaje));
}

bool Pelicula::existePuntajeUsuario(string nickname) {
  return this->puntajes.find(nickname) != this->puntajes.end();
}

Puntaje *Pelicula::obtenerPuntaje(string nickname) {
  return this->puntajes.find(nickname)->second;
}

void Pelicula::modificarPuntaje(int puntajeNuevo, string nickname) {
  auto puntaje = obtenerPuntaje(nickname);
  puntaje->setPuntos(puntajeNuevo);
}

vector<DtPuntaje> Pelicula::obtenerDtPuntajes() {
  vector<DtPuntaje> dtPuntajes;
  for (auto posPuntaje : this->puntajes) {
    DtPuntaje dtPuntaje =
        DtPuntaje(posPuntaje.second->getPuntos(),
                  posPuntaje.second->getUsuario()->getNickname());
    dtPuntajes.push_back(dtPuntaje);
  }
  return dtPuntajes;
}

// Destructor
Pelicula::~Pelicula() {
  for (auto posFuncion : this->funciones) {
    for (auto posCine : this->cines) {
      posCine.second->eliminarFuncionCine(posFuncion.second->getId());
      auto manejadorFuncion = ManejadorFuncion::getInstance();
      manejadorFuncion->eliminarFuncion(posFuncion.second->getId());
      delete posFuncion.second;
    }
  }
  this->funciones.clear();
  this->cines.clear();
  for (auto posComentario : this->comentarios) {
    auto manejadorComentario = ManejadorComentario::getInstance();
    manejadorComentario->eliminarComentario(posComentario.second->getId());
    delete posComentario.second;
  }
  this->comentarios.clear();
  for (auto posPuntaje : this->puntajes) {
    delete posPuntaje.second;
  }
  this->puntajes.clear();
}
