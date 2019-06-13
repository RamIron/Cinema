#ifndef PALAB06_MANEJADORUSUARIO_HH
#define PALAB06_MANEJADORUSUARIO_HH
#include "./Clases/Usuario.hh"
#include <map>
#include <vector>

using namespace std;

class ManejadorUsuario{
    private:
        static ManejadorUsuario* instancia;
        map<string,Usuario*> usuarios;
        ManejadorUsuario();
    public:
        static ManejadorUsuario* getInstancia();
        vector<Usuario*> obtenerUsuarios();
        Usuario* obtenerUsuario(string nickname);
        void agregarUsuario(Usuario*);
        bool existeUsuario(string nickname);
        void eliminarUsuario(string nickname);
        virtual ~ManejadorUsuario();
};
#endif
