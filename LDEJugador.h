#ifndef LDEJUGADOR_H
#define LDEJUGADOR_H
#include <NODOLDEJUGA.h>


class LDEJugador
{
    public:

    NODOLDEJUGA *primero;
    NODOLDEJUGA *ultimo;
    LDEJugador();
    void InsertarLDE(NODOLDEJUGA *NuevoX);
    void PimUltiMostrarLDE(NODOLDEJUGA *primero);
    void UltiPimMostrarLDE(NODOLDEJUGA *ultimo);
    void GraficarListaDoble(NODOLDEJUGA *primero,string jugador1);
    void GraficarLDE2(NODOLDEJUGA *primero,string jugador2);
    void EliminarLDEOFinal();
    void EliminarLDEO(string caracter);
    NODOLDEJUGA *obtenerLetraLDE(string letraX);
};

#endif // LDEJUGADOR_H
