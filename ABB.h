#ifndef ABB_H
#define ABB_H

#include <NODOABB.h>
#include <ListaSimple.h>

#include <fstream>
#include <iostream>//para imprimir en consola con cout
#include <string>
#include <string.h>// para ordenar alfabeticamente, comparacion con strcmp

using namespace std;//para imprimir en consola con cout

class ABB
{
    public:

    ListaSimple *POOLSPreorden = new ListaSimple();
    ListaSimple *POOLSInorden = new ListaSimple();
    ListaSimple *POOLSPostorden = new ListaSimple();
    ListaSimple *POOLSPMejoresPuntajes = new ListaSimple();

    NODOABB *raiz;
    ABB();
    //insertar un elemento en el arbol ABB
    void InsertarNodoABB(NODOABB **raiz , int NumeroX);
    void InsertarNodoABBString(NODOABB **raiz , string JugadorX);
    //mostrar los elementos del arbol ABB
    void MostrarABB(NODOABB *raiz,int contador);
    void MostrarABBjugador(NODOABB *raiz);
    void RecorrerABBjugador(NODOABB *raiz);
    void RecorrerABBPuntajeGeneral(NODOABB *raiz);

    //Recorridos Del arbol ABB
    void Recorrido_Pre_Orden(NODOABB *raiz);
    void Recorrido_En_Orden(NODOABB *raiz);
    void Recorrido_Post_Orden(NODOABB *raiz);
    //Graficar arbol ABB
    void GraficarABB(NODOABB *raiz);
    void RecorrerNodosParaGraficarABB(FILE *flujo,NODOABB *raiz);

    //Obtener un determinado Nodo del ABB
    NODOABB *ObtenerNodoABB(string Usuario);





};

#endif // ABB_H
