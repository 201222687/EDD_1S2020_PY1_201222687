#include "NODOABB.h"

NODOABB::NODOABB(int Numero)
{
    this->Numero=Numero;
    this->Izquierdo=NULL;
    this->Derecho=NULL;
}
NODOABB::NODOABB(string jugador)
{
    this->jugador=jugador;
    this->Izquierdo=NULL;
    this->Derecho=NULL;
    this->POOLSOrdenada = new ListaSimple();
}
