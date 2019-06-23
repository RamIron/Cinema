CC = g++
# -g es para debugear <3
CFLAGS = -Wall -Wextra -Wpedantic -Werror -c -g
OUTDIR = obj
tmp = Cine.o Comentario.o Credito.o Debito.o Financiera.o Funcion.o Pelicula.o Puntaje.o Reloj.o Reserva.o Sala.o Sesion.o Usuario.o\
	CCine.o CCineFactory.o CPelicula.o CPeliculaFactory.o CUsuario.o CUsuarioFactory.o\
	DtFecha.o DtCine.o DtComentario.o DtDireccion.o DtFechaHora.o DtFuncion.o DtHorario.o DtInfoPeli.o DtPelicula.o DtPuntaje.o DtSala.o\
	ManejadorCine.o ManejadorComentario.o ManejadorFinanciera.o ManejadorFuncion.o ManejadorPelicula.o ManejadorUsuario.o\
	Menu.o

OBJS = $(addprefix $(OUTDIR)/,$(tmp))

$(shell mkdir -p $(OUTDIR))


programa: $(OBJS) $(OUTDIR)/Main.o
	$(CC) $? -o main


$(OUTDIR)/Main.o: Main/Main.hh Main/Main.cpp $(OUTDIR)/CCineFactory.o $(OUTDIR)/CPeliculaFactory.o $(OUTDIR)/CUsuarioFactory.o $(OUTDIR)/DtFecha.o $(OUTDIR)/ManejadorCine.o $(OUTDIR)/ManejadorFinanciera.o $(OUTDIR)/ManejadorPelicula.o $(OUTDIR)/ManejadorUsuario.o
	$(CC) $(CFLAGS) Main/Main.cpp -o $@

$(OUTDIR)/Menu.o: Main/Menu.hh Main/Menu.cpp
	$(CC) $(CFLAGS) Main/Menu.cpp -o $@

$(OUTDIR)/CCine.o: Controllers/CCine.hh Controllers/CCine.cpp $(OUTDIR)/Sesion.o $(OUTDIR)/Cine.o $(OUTDIR)/DtCine.o $(OUTDIR)/DtDireccion.o $(OUTDIR)/Sala.o $(OUTDIR)/ManejadorCine.o
	$(CC) $(CFLAGS) Controllers/CCine.cpp -o $@


$(OUTDIR)/CCineFactory.o: Controllers/CCineFactory.hh Controllers/CCineFactory.cpp $(OUTDIR)/CCine.o
	$(CC) $(CFLAGS) Controllers/CCineFactory.cpp -o $@


$(OUTDIR)/CPelicula.o: Controllers/CPelicula.hh Controllers/CPelicula.cpp $(OUTDIR)/Credito.o $(OUTDIR)/Debito.o $(OUTDIR)/Funcion.o $(OUTDIR)/Pelicula.o $(OUTDIR)/Reloj.o $(OUTDIR)/Reserva.o $(OUTDIR)/Sesion.o $(OUTDIR)/DtCine.o $(OUTDIR)/DtDireccion.o $(OUTDIR)/DtFecha.o $(OUTDIR)/DtFechaHora.o $(OUTDIR)/DtFuncion.o $(OUTDIR)/DtHorario.o $(OUTDIR)/DtPelicula.o $(OUTDIR)/ManejadorComentario.o $(OUTDIR)/ManejadorFinanciera.o $(OUTDIR)/ManejadorFuncion.o $(OUTDIR)/ManejadorPelicula.o $(OUTDIR)/CCine.o
	$(CC) $(CFLAGS) Controllers/CPelicula.cpp -o $@


$(OUTDIR)/CPeliculaFactory.o: Controllers/CPeliculaFactory.hh Controllers/CPeliculaFactory.cpp $(OUTDIR)/CPelicula.o
	$(CC) $(CFLAGS) Controllers/CPeliculaFactory.cpp -o $@


$(OUTDIR)/CUsuario.o: Controllers/CUsuario.hh Controllers/CUsuario.cpp $(OUTDIR)/ManejadorUsuario.o $(OUTDIR)/Sesion.o $(OUTDIR)/Usuario.o
	$(CC) $(CFLAGS) Controllers/CUsuario.cpp -o $@


$(OUTDIR)/CUsuarioFactory.o: Controllers/CUsuarioFactory.hh Controllers/CUsuarioFactory.cpp $(OUTDIR)/CUsuario.o
	$(CC) $(CFLAGS) Controllers/CUsuarioFactory.cpp -o $@


$(OUTDIR)/ManejadorCine.o: Handlers/ManejadorCine.hh Handlers/ManejadorCine.cpp $(OUTDIR)/Cine.o
	$(CC) $(CFLAGS) Handlers/ManejadorCine.cpp -o $@


$(OUTDIR)/ManejadorComentario.o: Handlers/ManejadorComentario.hh Handlers/ManejadorComentario.cpp $(OUTDIR)/Comentario.o
	$(CC) $(CFLAGS) Handlers/ManejadorComentario.cpp -o $@


$(OUTDIR)/ManejadorFinanciera.o: Handlers/ManejadorFinanciera.hh Handlers/ManejadorFinanciera.cpp $(OUTDIR)/Financiera.o
	$(CC) $(CFLAGS) Handlers/ManejadorFinanciera.cpp -o $@


$(OUTDIR)/ManejadorFuncion.o: Handlers/ManejadorFuncion.hh Handlers/ManejadorFuncion.cpp $(OUTDIR)/Funcion.o
	$(CC) $(CFLAGS) Handlers/ManejadorFuncion.cpp -o $@


$(OUTDIR)/ManejadorPelicula.o: Handlers/ManejadorPelicula.hh Handlers/ManejadorPelicula.cpp $(OUTDIR)/Pelicula.o
	$(CC) $(CFLAGS) Handlers/ManejadorPelicula.cpp -o $@


$(OUTDIR)/ManejadorUsuario.o: Handlers/ManejadorUsuario.hh Handlers/ManejadorUsuario.cpp $(OUTDIR)/Usuario.o
	$(CC) $(CFLAGS) Handlers/ManejadorUsuario.cpp -o $@


$(OUTDIR)/Cine.o: Clases/Cine.hh Clases/Cine.cpp $(OUTDIR)/DtDireccion.o $(OUTDIR)/DtSala.o $(OUTDIR)/Sala.o
	$(CC) $(CFLAGS) Clases/Cine.cpp -o $@


$(OUTDIR)/Comentario.o: Clases/Comentario.hh Clases/Comentario.cpp $(OUTDIR)/Usuario.o
	$(CC) $(CFLAGS) Clases/Comentario.cpp -o $@


$(OUTDIR)/Credito.o: Clases/Credito.hh Clases/Credito.cpp $(OUTDIR)/Financiera.o $(OUTDIR)/Reserva.o $(OUTDIR)/Financiera.o $(OUTDIR)/Usuario.o
	$(CC) $(CFLAGS) Clases/Credito.cpp -o $@


$(OUTDIR)/Debito.o: Clases/Debito.hh Clases/Debito.cpp $(OUTDIR)/Reserva.o $(OUTDIR)/Usuario.o
	$(CC) $(CFLAGS) Clases/Debito.cpp -o $@


$(OUTDIR)/Financiera.o: Clases/Financiera.hh Clases/Financiera.cpp
	$(CC) $(CFLAGS) Clases/Financiera.cpp -o $@


$(OUTDIR)/Funcion.o: Clases/Funcion.hh Clases/Funcion.cpp $(OUTDIR)/Reserva.o $(OUTDIR)/DtFecha.o $(OUTDIR)/DtFechaHora.o $(OUTDIR)/DtHorario.o 
	$(CC) $(CFLAGS) Clases/Funcion.cpp -o $@


$(OUTDIR)/Pelicula.o: Clases/Pelicula.hh Clases/Pelicula.cpp $(OUTDIR)/Cine.o $(OUTDIR)/Comentario.o $(OUTDIR)/Funcion.o $(OUTDIR)/Puntaje.o $(OUTDIR)/DtCine.o $(OUTDIR)/DtComentario.o $(OUTDIR)/DtFuncion.o $(OUTDIR)/DtInfoPeli.o $(OUTDIR)/DtPuntaje.o $(OUTDIR)/ManejadorComentario.o $(OUTDIR)/ManejadorFuncion.o
	$(CC) $(CFLAGS) Clases/Pelicula.cpp -o $@


$(OUTDIR)/Puntaje.o: Clases/Puntaje.hh Clases/Puntaje.cpp $(OUTDIR)/Usuario.o 
	$(CC) $(CFLAGS) Clases/Puntaje.cpp -o $@


$(OUTDIR)/Reloj.o: Clases/Reloj.hh Clases/Reloj.cpp $(OUTDIR)/DtFechaHora.o 
	$(CC) $(CFLAGS) Clases/Reloj.cpp -o $@


$(OUTDIR)/Reserva.o: Clases/Reserva.hh Clases/Reserva.cpp $(OUTDIR)/Usuario.o 
	$(CC) $(CFLAGS) Clases/Reserva.cpp -o $@


$(OUTDIR)/Sala.o: Clases/Sala.hh Clases/Sala.cpp $(OUTDIR)/Funcion.o 
	$(CC) $(CFLAGS) Clases/Sala.cpp -o $@


$(OUTDIR)/Sesion.o: Clases/Sesion.hh Clases/Sesion.cpp $(OUTDIR)/Usuario.o $(OUTDIR)/ManejadorUsuario.o
	$(CC) $(CFLAGS) Clases/Sesion.cpp -o $@


$(OUTDIR)/Usuario.o: Clases/Usuario.hh Clases/Usuario.cpp
	$(CC) $(CFLAGS) Clases/Usuario.cpp -o $@


$(OUTDIR)/DtCine.o: Datatypes/DtCine.hh Datatypes/DtCine.cpp $(OUTDIR)/DtDireccion.o
	$(CC) $(CFLAGS) Datatypes/DtCine.cpp -o $@


$(OUTDIR)/DtComentario.o: Datatypes/DtComentario.hh Datatypes/DtComentario.cpp
	$(CC) $(CFLAGS) Datatypes/DtComentario.cpp -o $@


$(OUTDIR)/DtDireccion.o: Datatypes/DtDireccion.hh Datatypes/DtDireccion.cpp
	$(CC) $(CFLAGS) Datatypes/DtDireccion.cpp -o $@


$(OUTDIR)/DtFecha.o: Datatypes/DtFecha.hh Datatypes/DtFecha.cpp
	$(CC) $(CFLAGS) Datatypes/DtFecha.cpp -o $@


$(OUTDIR)/DtFechaHora.o: Datatypes/DtFechaHora.hh Datatypes/DtFechaHora.cpp $(OUTDIR)/DtFecha.o $(OUTDIR)/DtHorario.o
	$(CC) $(CFLAGS) Datatypes/DtFechaHora.cpp -o $@


$(OUTDIR)/DtFuncion.o: Datatypes/DtFuncion.hh Datatypes/DtFuncion.cpp $(OUTDIR)/DtFecha.o $(OUTDIR)/DtFechaHora.o $(OUTDIR)/DtHorario.o
	$(CC) $(CFLAGS) Datatypes/DtFuncion.cpp -o $@


$(OUTDIR)/DtHorario.o: Datatypes/DtHorario.hh Datatypes/DtHorario.cpp
	$(CC) $(CFLAGS) Datatypes/DtHorario.cpp -o $@


$(OUTDIR)/DtInfoPeli.o: Datatypes/DtInfoPeli.hh Datatypes/DtInfoPeli.cpp $(OUTDIR)/DtComentario.o $(OUTDIR)/DtPuntaje.o
	$(CC) $(CFLAGS) Datatypes/DtInfoPeli.cpp -o $@


$(OUTDIR)/DtPelicula.o: Datatypes/DtPelicula.hh Datatypes/DtPelicula.cpp
	$(CC) $(CFLAGS) Datatypes/DtPelicula.cpp -o $@


$(OUTDIR)/DtPuntaje.o: Datatypes/DtPuntaje.hh Datatypes/DtPuntaje.cpp $(OUTDIR)/DtFecha.o
	$(CC) $(CFLAGS) Datatypes/DtPuntaje.cpp -o $@


$(OUTDIR)/DtSala.o: Datatypes/DtSala.hh Datatypes/DtSala.cpp $(OUTDIR)/DtFuncion.o
	$(CC) $(CFLAGS) Datatypes/DtSala.cpp -o $@
clean:
	rm -fr $(OUTDIR)/*
	rm -f main
