#include "Puntaje.hh"

int Puntaje::currentId = 0;

//Constructores
Puntaje::Puntaje() { this->id = currentId++; }
Puntaje::Puntaje(int puntos){
	this->id = currentId++;
	this->puntos = puntos;
}

//Getters y Setters
int Puntaje::getId() {return this->id;}
int Puntaje::getPuntos() {return this->puntos;}

void Puntaje::setPuntos(int puntos) {this->puntos = puntos;}

//Destructor
Puntaje::~Puntaje() {}
