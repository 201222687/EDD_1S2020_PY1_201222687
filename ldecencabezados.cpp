#include "ldecencabezados.h"



void ldecencabezados::insertarenldec(cabezanodoldec *nuevo)
{

 //********************************inicio insercion**********************//
    if(primero==NULL)
    {
        primero=nuevo;
        ultimo=nuevo;
        primero->siguiente=primero;
        primero->anterior= ultimo;
    }
    else
    {

    //Insercion al inicio de la lista doblemente enlazada circular <cabezera>.
        if(nuevo->dato < primero->dato)
        {
            nuevo->siguiente=primero;
            primero->anterior=nuevo;
            ultimo=primero;
            primero=nuevo;
            primero->anterior=ultimo;
            ultimo->siguiente=primero;
        }
        else
        {
            cabezanodoldec *actual = primero;

            while (actual->siguiente!=primero)
            {
      //Insercion en el medio de la lista doblemente enlazada circular<cabecera>.
                if(nuevo->dato < actual->siguiente->dato)
                {
                    nuevo->siguiente = actual->siguiente;
                    actual->siguiente->anterior = nuevo;
                    nuevo->anterior = actual;
                    actual->siguiente=nuevo;
                    break;
                }
               actual = actual->siguiente;
            }


      //Insercion al final de la lista doblemente enlazada circular<cabecera>.
            if(actual->siguiente==primero)
            {
                actual->siguiente =nuevo;
                nuevo->anterior = actual;
                nuevo->siguiente=primero;
                primero->anterior=nuevo;
                ultimo=nuevo;
            }


        }


    }
    //********************************Fin insercion**********************//
}

cabezanodoldec *ldecencabezados::obtenerEncabezado(int dato)
{

    cabezanodoldec *actual = primero;


   if(actual)
   {
       do{
           if(actual->dato==dato)
           {
               return actual;
           }

           actual = actual->siguiente;

       }while(actual!=primero);

   }


    return NULL;


}
