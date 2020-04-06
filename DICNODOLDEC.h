#ifndef DICNODOLDEC_H
#define DICNODOLDEC_H
#include <string>//string se incluye para poder aceptar valores nulos.
#include <iostream>//para imprimir en consola con cout
using namespace std;//para imprimir en consola con cout

class DICNODOLDEC
{
    public:

    string palabra;
    DICNODOLDEC *anterior;
    DICNODOLDEC *siguiente;

    DICNODOLDEC(string palabra);
};

#endif // DICNODOLDEC_H
