#ifndef PALAB06_COMENTARIO_HH
#define PALAB06_COMENTARIO_HH

#include <iostream>
#include <vector>

using namespace std;

class Usuario;

class Comentario{
	private:
		int id;
		static int currentId;
		string texto;
		Usuario* u;
		vector<Comentario*> comentarios;
	
	public:
		//Constructores
		Comentario();
		Comentario(int puntos);
		
		//Getters y Setters
		int getId();
		int getComentario();
		
		void setComentario(string comentario);
		
		//Destructor
		~Comentario();
};

#include "Usuario.hh"

#endif
