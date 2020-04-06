#include "nodoortogonal.h"

nodoortogonal::nodoortogonal(int fila, int columna, string valor,int PuntajeM)
{
    this->fila=fila;
    this->columna=columna;
    this->valor=valor;
    this->PuntajeM=PuntajeM;
    this->arriba=NULL;
    this->abajo=NULL;
    this->izquierda=NULL;
    this->derecha=NULL;
}
