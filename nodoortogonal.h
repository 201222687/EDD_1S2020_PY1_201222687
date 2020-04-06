#ifndef NODOORTOGONAL_H
#define NODOORTOGONAL_H
#include <string>//string se incluye para poder aceptar valores nulos.
using namespace std;// para poder usar tipo de variable string

class nodoortogonal
{
    public:
    int  fila;
    int  columna;
    string valor;
    int PuntajeM;
    nodoortogonal *arriba;
    nodoortogonal *abajo;
    nodoortogonal *izquierda;
    nodoortogonal *derecha;
    //Area donde se hubicara el apuntador <nodolso>
    nodoortogonal(int fila, int columna, string valor , int PuntajeM);
};

#endif // NODOORTOGONAL_H
