#include "Pelicula.hh"
#include "../Handlers/ManejadorComentario.hh"

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

float Pelicula::getPuntajePromedio() { return this->puntajePromedio; }

string Pelicula::getPoster() { return this->poster; }

void Pelicula::setTitulo(string titulo) { this->titulo = titulo; }

void Pelicula::setSinopsis(string sinopsis) { this->sinopsis = sinopsis; }

void Pelicula::setPuntajePromedio(float puntajePromedio) {
  this->puntajePromedio = puntajePromedio;
}

void Pelicula::setPoster(string poster) { this->poster = poster; }

// Destructor
Pelicula::~Pelicula() {}

// Operaciones
float Pelicula::calcularPuntajePromedio() {}

void Pelicula::agregarFuncion(Funcion *funcion) {
  this->funciones.insert(make_pair(funcion->getId(), funcion));
}

void Pelicula::agregarCine(Cine *cine) {
  this->cines.insert(make_pair(cine->getId(), cine));
}

vector<DtCine> Pelicula::obtenerCines() {
  vector<DtCine> dtCines;
  for (auto posCine : cines) {
    DtCine dtCine =
        DtCine(posCine.second->getId(), posCine.second->getDireccion());
    dtCines.push_back(dtCine);
  }
  return dtCines;
}

bool Pelicula::existeCine(int id) { return cines.find(id) != cines.end(); }

DtCine Pelicula::obtenerDtCine(int id) {
  auto cine = cines.find(id);
  DtCine dtcine = DtCine(cine->second->getId(), cine->second->getDireccion());
  return dtcine;
}

Cine *Pelicula::obtenerCine(int id) { return cines.find(id)->second; }

vector<DtComentario> Pelicula::obtenerComentario() {}

vector<DtCine> Pelicula::verInfoAdicional() {}

int Pelicula::obtenerPuntuacion() {}

vector<DtInfoPeli> Pelicula::mostrarInfo() {}

vector<DtFuncion> Pelicula::obtenerDtFunciones() {
  vector<DtFuncion> dtFunciones;
  for (auto posFuncion : funciones) {
    DtFuncion dtFuncion = DtFuncion(
        posFuncion.second->getId(), posFuncion.second->getPrecio(),
        posFuncion.second->getFecha(), posFuncion.second->getHorario(), posFuncion.second->getFechaHora());
    dtFunciones.push_back(dtFuncion);
  }
  return dtFunciones;
}

bool Pelicula::existeFuncion(int id) {
  return funciones.find(id) != funciones.end();
}

void Pelicula::agregarComentario(string comentario, Usuario *usuario){
  auto c = new Comentario(comentario, usuario);
  this->comentarios.insert(make_pair(c->getId(), c));
  auto manejadorComentario = ManejadorComentario::getInstance();
  manejadorComentario->agregarComentario(c);
}

void Pelicula::obtenerDtComentarios (map<int, Comentario*> comentarios, vector<DtPrintComentario> &dtComentarios, int profundidad){
  for(auto posComentario : comentarios){
    auto usuario = posComentario.second->getUsuario();
    auto dtPrintComentario = DtPrintComentario(usuario->getNickname(), profundidad, posComentario.second->getTexto());
    dtComentarios.push_back(dtPrintComentario);
    if(posComentario.second->getRespuestas().size() != 0){
      obtenerDtComentarios(posComentario.second->getRespuestas(), dtComentarios, profundidad + 1);
    }
  }
  /*
  map<int, Comentario*>::iterator it;
  for (it = comentarios.begin(); it != comentarios.end(); ++it){
    Usuario *u = it->second->getUsuario();
    auto dtPrintComentario = DtPrintComentario(u->getNickname(), prof,  it->second->getTexto());
    dtComentarios.push_back(dtPrintComentario);
    if(it->second->getRespuestas().size() != 0){
      obtenerDtComentarios(it->second->getRespuestas(), dtComentarios, prof + 1);
    }
  }
   */
}

map<int, Comentario*> Pelicula::obtenerComentarios(){
  return this->comentarios;
}

bool Pelicula::existePuntajeUsuario(string nickname) {
  return puntajes.find(nickname) != puntajes.end();
}

Puntaje *Pelicula::obtenerPuntaje(string nickname){
  return puntajes.find(nickname)->second;
}

void Pelicula::modificarPuntaje(int puntajeNuevo, string nickname){
  auto puntaje = obtenerPuntaje(nickname);
  puntaje->setPuntos(puntajeNuevo);
}

void Pelicula::agregarPuntaje(Puntaje *puntaje){
  puntajes.insert(make_pair(puntaje->getUsuario()->getNickname(), puntaje));
}

void Pelicula::respondeComentario(int idComentario, string respuesta, Usuario *usuario){
  auto manejadorComentario = ManejadorComentario::getInstance();
  auto cRespuesta = new Comentario(respuesta, usuario);
  auto comentario = manejadorComentario->obtenerComentario(idComentario);
  comentario->agregarRespuesta(cRespuesta);
  manejadorComentario->agregarComentario(cRespuesta);
}
