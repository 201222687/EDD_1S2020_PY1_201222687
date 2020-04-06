#ifndef FICHASCOLA_H
#define FICHASCOLA_H
#include <FINODOCOLA.h>

class FICHASCOLA
{
    public:

    FINODOCOLA *primerocola;
    FINODOCOLA *ultimocola;
    FICHASCOLA();
    void InsertarCola(FINODOCOLA *NuevoX);
    void MostrarCola(FINODOCOLA *Primerocolain);
    int NumeroDeLetra(FINODOCOLA *Primerocolain, string Letra);
    void Desencolar();
    void GraficarCola(FINODOCOLA *primerocolain);
};

#endif // FICHASCOLA_H
