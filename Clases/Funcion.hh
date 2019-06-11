#ifndef PALAB06_FUNCION_HH
#define PALAB06_FUNCION_HH

#include <iostream>
#include "DtFecha.hh"
#include "DtHorario.hh"
#include "Reserva.hh"
#include <vector>

using namespace std;

class Funcion{
	private:
		int id;
		static int currentId;
		DtFecha dia;
		DtHorario horario;
		float precio;
		vector<Reserva *> reservas;
		
	public:
		//Constructores
		Funcion();
		Funcion(DtFecha dia, DtHorario horario, float precio);
		Funcion(DtFecha dia, DtHorario horario);
				
		//Getters y Setters
		int getID();
		DtFecha getFecha();
		DtHorario getHorario();
		float getPrecio();
		
		void setFecha(DtFecha dia);
		void setHorario(DtHorario horario);
		void setPrecio(float precio);
		
		//Destructor
		~Funcion();
};

#endif
