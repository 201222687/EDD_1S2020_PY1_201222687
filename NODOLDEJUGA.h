#ifndef NODOLDEJUGA_H
#define NODOLDEJUGA_H
#include <string>//string se incluye para poder aceptar valores nulos.
#include <iostream>//para imprimir en consola con cout
using namespace std;//para imprimir en consola con cout


class NODOLDEJUGA
{
    public:
    string letra;
    int  puntajeletra;
    NODOLDEJUGA *Siguiente;
    NODOLDEJUGA *Anterior;
    NODOLDEJUGA(string letra,int puntajeletra);
};

#endif // NODOLDEJUGA_H
