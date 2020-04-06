#include "NodoLS.h"


NodoLS::NodoLS(string jugador)
{
    this->jugador=jugador;
    this->Siguiente = NULL;
}


NodoLS::NodoLS(int puntaje)
{
    this->puntaje=puntaje;
    this->Siguiente = NULL;
}

NodoLS::NodoLS(string jugador, int puntaje)
{
    this->jugador=jugador;
    this->puntaje=puntaje;
    this->Siguiente = NULL;
}


