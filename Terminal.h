#ifndef TERMINAL_H
#define TERMINAL_H
#include <ldecencabezados.h>



class Terminal
{
    public:
    string valor;
    ldecencabezados *AccesoDerechaLDEC;
    ldecencabezados *AccesoAbajoLDEC;

    Terminal(string valor);
};

#endif // TERMINAL_H
