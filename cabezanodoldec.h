#ifndef CABEZANODOLDEC_H
#define CABEZANODOLDEC_H
#include <nodoortogonal.h>
#include <string>//string se incluye para poder aceptar valores nulos.

class cabezanodoldec
{
    public:
    int dato;
    cabezanodoldec *anterior;
    cabezanodoldec *siguiente;
    nodoortogonal *accesonodoortogonal;
    cabezanodoldec(int dato);
};

#endif // CABEZANODOLDEC_H
