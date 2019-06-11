#include "Comentario.hh"

int Comentario::currentId = 0;

//Constructores
Comentario::Comentario() { this->id = currentId++; }
Comentario::Comentario(string texto){
	this->id = currentId++;
	this->texto = comentario;
}

//Getters y Setters
int Comentario::getId() {return this->id;}
int Comentario::getComentario() {return this->texto;}

void Comentario::setComentario(string comentario) {this->texto = comentario;}

//Destructor
Comentario::~Puntaje() {}
