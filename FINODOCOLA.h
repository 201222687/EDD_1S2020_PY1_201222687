#ifndef FINODOCOLA_H
#define FINODOCOLA_H
#include <string>//string se incluye para poder aceptar valores nulos.
#include <iostream>//para imprimir en consola con cout
using namespace std;//para imprimir en consola con cout


class FINODOCOLA
{
    public:
        int puntaje;
        string letra;
        int CantidadDeFichas;
        FINODOCOLA *Siguiente;
        FINODOCOLA(int puntaje,string letra,int CantidadDeFichas);
};

#endif // FINODOCOLA_H
