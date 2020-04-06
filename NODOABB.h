#ifndef NODOABB_H
#define NODOABB_H
#include <ListaSimple.h>
#include <string>//string se incluye para poder aceptar valores nulos.
using namespace std;//para imprimir en consola con cout

class NODOABB
{
    public:

    int Numero;
    string jugador;
    ListaSimple *POOLSOrdenada;
    NODOABB *Derecho;
    NODOABB *Izquierdo;
    NODOABB(int Numero);
    NODOABB(string jugador);
};

#endif // NODOABB_H
