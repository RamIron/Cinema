#include "Funcion.hh"

int Funcion::currentId = 0;

//Constructores
Funcion::Funcion() { this->id = currentId++; }

Funcion::Funcion(DtFecha dia, DtHorario horario, float precio) {
	this->id = currentId;
	this->dia = dia;
	this->horario = horario;
	this->precio;
}

Funcion::Funcion(DtFecha dia, DtHorario horario){
	this->id = currentId;
	this->dia = dia;
	this->horario = horario;
}

//Getters y Setters
int Funcion::getID() {return this->id; }
DtFecha Funcion::getFecha() {return this->dia; }
DtHorario Funcion::getHorario() {return this->horario; }
float Funcion::getPrecio() {return this->precio; }

void Funcion::setFecha(DtFecha dia) {this->dia = dia; }
void Funcion::setHorario(DtHorario horario) {this->horario = horario; }
void Funcion::setPrecio(float precio) {this->precio = precio; }

//Destructor
Funcion::~Funcion() {}
