#ifndef NODOLS_H
#define NODOLS_H
#include <string>//string se incluye para poder aceptar valores nulos.
#include <iostream>//para imprimir en consola con cout
using namespace std;//para imprimir en consola con cout

class NodoLS
{
    public:
    string jugador;
    int puntaje;
    NodoLS *Siguiente;
    NodoLS(string jugador);
    NodoLS(int puntaje);
    NodoLS(string jugador, int puntaje);

};

#endif // NODOLS_H
