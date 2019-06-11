#ifndef PALAB06_PUNTAJE_HH
#define PALAB06_PUNTAJE_HH

#include <iostream>

using namespace std;

class Usuario;

class Puntaje{
	private:
		int id;
		static int currentId;
		int puntos;
		Usuario* u;
	
	public:
		//Constructores
		Puntaje();
		Puntaje(int puntos);
		
		//Getters y Setters
		int getId();
		int getPuntos();
		
		void setPuntos(int puntos);
		
		//Destructor
		~Puntaje();
};

#include "Usuario.hh"

#endif
