#include "FICHASCOLA.h"


FICHASCOLA::FICHASCOLA()
{
    this->primerocola= NULL;
    this->ultimocola=NULL;
}

void FICHASCOLA::InsertarCola(FINODOCOLA *NuevoX)
{
     if(primerocola==NULL)
        {
               primerocola=ultimocola=NuevoX;
        }
       else
          {
        //Insercion al final de la lista simple enlazada
              ultimocola->Siguiente =NuevoX;
              ultimocola=NuevoX;
          }

}
void FICHASCOLA:: MostrarCola(FINODOCOLA *primerocolain)
{
    FINODOCOLA *Actual = primerocolain;


   printf("------------------Mostrando Cola [Empleados].-------------\n");

    if(Actual==NULL)
    {
    printf("Cola De Empleados Se Encuentra Vacia.\n");
    }
    else
    {

    while (Actual!=NULL)
    {
       printf("Puntaje:%d\n Letra:%s\n Cantidad de fichas:%d\n",Actual->puntaje,Actual->letra.c_str(),Actual->CantidadDeFichas);
       Actual = Actual->Siguiente;
    }

    }
    printf("-----------------------fin--------------------------------\n");

}
int FICHASCOLA:: NumeroDeLetra(FINODOCOLA *Primerocolain, string Letra)
{
    int contador=0;
    FINODOCOLA *Actual = Primerocolain;

    while (Actual!=NULL)
    {
       if(Actual->letra==Letra)
       {
            contador=contador+1;
       }
       Actual = Actual->Siguiente;
    }

    return contador;

}


void FICHASCOLA:: Desencolar()
{


   /* Si no hay nodos en la pila retornamos 0 */
   if(primerocola==NULL)
   {
    printf("La cola de empleados esta vacia.\n");
   }
   else {
   /* Asignamos a primero la dirección del segundo nodo */
   primerocola = primerocola->Siguiente;
   }
   /* Borrar el nodo */
   //free(primerocola->Siguiente);
}

void FICHASCOLA:: GraficarCola(FINODOCOLA *primerocolain)
{
    FILE *flujo = fopen("FichasCola.txt","w");

    if(flujo==NULL) { perror("Error en la creacion del archivo.\n"); }
    else
    {
    fprintf(flujo,"digraph FichasCola{\n");
    fprintf(flujo,"rankdir=TB\n");
    FINODOCOLA *Actual=primerocolain;

    if(Actual!=NULL)
    {
        while (Actual!=NULL)
        {
            fprintf(flujo,"NODOc_%p[shape=rectangle,color=Red,style=filled,fillcolor=Skyblue,label=\"#Puntaje:%d\\lLetra:%s\"];\n",Actual,Actual->puntaje,Actual->letra.c_str());

            Actual=Actual->Siguiente;
        }

        Actual = primerocolain;

        while (Actual!=NULL)
        {
            if(Actual->Siguiente==NULL)
            {
               // fprintf(flujo,"NODOc_%d;\n",Actual,Actual->Siguiente);
            }
            else
            {
             fprintf(flujo,"NODOc_%p->NODOc_%p;\n",Actual,Actual->Siguiente);
            }
            Actual=Actual->Siguiente;
        }
    }

    fprintf(flujo,"label=\"Cola\nReporte Fichas Del Juego.\";\nfontsize =15;\n }");

    }

    fflush(flujo);
    fclose(flujo);

}
