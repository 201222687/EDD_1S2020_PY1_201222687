#include "FINODOCOLA.h"


FINODOCOLA::FINODOCOLA(int puntaje,string letra,int CantidadDeFichas)
{
    this->puntaje= puntaje;
    this->letra= letra;
    this->CantidadDeFichas= CantidadDeFichas;
    this->Siguiente= NULL;
}
