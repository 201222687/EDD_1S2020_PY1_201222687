#ifndef MATRIZORTOGONAL_H
#define MATRIZORTOGONAL_H

#include<iostream>//para poder imprimir en consola
using namespace std;//para poder imprimir en consola
#include <ldecencabezados.h>
#include <Terminal.h>
#include <fstream>



class matrizortogonal
{
    public:
    ldecencabezados *ListaCabezasColumna;
    ldecencabezados *ListaCabezasFila;
    Terminal *CreacionNodoInicial ;
    matrizortogonal();

    void InsertarEnMatrizOrtogonal(int fila, int columna, string valor,int puntajeM);
    void RecorrerFilas();
    void RecorrerColumnas();
    string RecorrerFilasPa();
    string RecorrerColumnasPa();
    void RecorrerTerminalColumnas();
    void RecorrerTerminalFilas();
    void GraficarMatrizGeneral(string Ruta);
    int RecorrerFilasLetraPuntaje();
};

#endif // MATRIZORTOGONAL_H
