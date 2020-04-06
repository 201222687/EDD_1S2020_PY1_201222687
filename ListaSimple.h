#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H
#include <NodoLS.h>




class ListaSimple
{
    public:

    NodoLS *primero;
    NodoLS *ultimo;
    ListaSimple();
    void InsertarLS(NodoLS  *nuevo);
    void InsertarLSOrdenado(NodoLS  *nuevo);
    void MostrarLS_PrimeroUltimoOrdenada(NodoLS *primeroIn);
    void MostrarLS_PrimeroUltimo(NodoLS *primeroIn);
    void MostrarLSOrdenadaPuntajes(NodoLS *primeroIn);
    void GraficarLSimple(NodoLS *primeroIn);
    void GraficarLSimple2(NodoLS *primeroIn);
    void GraficarLSimple3(NodoLS *primeroIn);
    void GraficarPuntajeJugador(NodoLS *primeroIn,string Usuario);
    void GraficarPuntajeGeneral(NodoLS *primeroIn);

};

#endif // LISTASIMPLE_H
