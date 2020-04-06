#ifndef DICCIONARIOLDEC_H
#define DICCIONARIOLDEC_H
#include <DICNODOLDEC.h>


class DICCIONARIOLDEC
{
    public:
    DICNODOLDEC  *primero;
    DICNODOLDEC  *ultimo;
    void insertarenldec(DICNODOLDEC *nuevo);
    void DICmostrarLDEC(DICNODOLDEC *PrimeroIn);
    void UPDICmostrarLDEC(DICNODOLDEC *UltimoIn);
    void GraficarLDEC(DICNODOLDEC *PrimeroIn);
    DICNODOLDEC *obtenerPalabra(string palabra);
};

#endif // DICCIONARIOLDEC_H
