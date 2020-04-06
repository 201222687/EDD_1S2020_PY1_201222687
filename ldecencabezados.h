#ifndef LDECENCABEZADOS_H
#define LDECENCABEZADOS_H
#include <cabezanodoldec.h>

class ldecencabezados
{
    public:

    cabezanodoldec  *primero;
    cabezanodoldec  *ultimo;
    void insertarenldec(cabezanodoldec *nuevo);
    cabezanodoldec *obtenerEncabezado(int dato);

};

#endif // LDECENCABEZADOS_H
