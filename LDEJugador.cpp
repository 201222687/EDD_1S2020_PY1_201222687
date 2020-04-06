#include "LDEJugador.h"

LDEJugador::LDEJugador()
{
    this->primero=NULL;
    this->ultimo=NULL;
}

void LDEJugador::InsertarLDE(NODOLDEJUGA *NuevoX)
{
    //********************************inicio insercion lista doblemente enlazada **********************//
                   if(primero==NULL)
                   {
                       primero=ultimo=NuevoX;
                   }
                   else
                   {
                       ultimo->Siguiente =NuevoX;
                       NuevoX->Anterior = ultimo;
                       ultimo=NuevoX;
                   }
    //********************************inicio insercion lista doblemente enlazada **********************//
}

void LDEJugador::PimUltiMostrarLDE(NODOLDEJUGA *primero)
{
    NODOLDEJUGA *Actual= primero;

    if(Actual!=NULL)
    {
       cout<<"-----------------------Inicio de la lista doble--------------.\n"<<endl;
       cout<<"Del primer nodo al ultimo nodo.\n";
        while(Actual!=NULL)
        {
            //cout<<"caracter: "<< Actual->caracter<<"\n";
            cout<<"Letra: "<<Actual->letra<<"Puntaje: "<<Actual->puntajeletra <<"\n"<<endl;
            Actual=Actual->Siguiente;
        }

       cout<<"-----------------------Fin de la lista doble------------------.\n"<<endl;

    }
    else
    {
        cout<<"La lista doble se encuentra vacia.\n"<<endl;
    }


}

void LDEJugador::UltiPimMostrarLDE(NODOLDEJUGA *ultimo)
{
    NODOLDEJUGA *Actual= ultimo;

    if(Actual!=NULL)
    {
       cout<<"-----------------------Inicio de la lista doble--------------.\n"<<endl;
       cout<<"Del ultimo nodo al primer nodo.\n";
        while(Actual!=NULL)
        {
            //cout<<"caracter: "<< Actual->caracter<<"\n";
            cout<<"Letra: "<<Actual->letra<<"Puntaje: "<<Actual->puntajeletra <<"\n"<<endl;
            Actual=Actual->Anterior;
        }

       cout<<"-----------------------Fin de la lista doble------------------.\n"<<endl;

    }
    else
    {
        cout<<"La lista doble se encuentra vacia.\n"<<endl;
    }


}

void LDEJugador::GraficarListaDoble(NODOLDEJUGA *primero,string jugador1)
{
    FILE *flujo = fopen("LDEJFisJug1.txt","w");

    if(flujo==NULL)
    { perror("Error en la creacion del archivo.\n"); }
    else
    {
    fprintf(flujo,"digraph LDEJFisJug1{\n");
    fprintf(flujo,"rankdir=LR\n");

    NODOLDEJUGA *Actual=primero;

    if(Actual!=NULL)
    {
        while (Actual!=NULL)
        {
            fprintf(flujo,"NODOc_%p[shape=rectangle,color=Red,style=filled,fillcolor=Skyblue,label=\"Ficha: %s\nPuntaje: %d \"];\n",Actual,Actual->letra.c_str(),Actual->puntajeletra);
            Actual=Actual->Siguiente;
        }

        Actual = primero;

        while (Actual!=NULL)
        {
            if(Actual->Siguiente==NULL)
            {
               // fprintf(flujo,"NODOc_%d;\n",Actual,Actual->Siguiente);
            }
            else
            {
             fprintf(flujo,"NODOc_%p->NODOc_%p;\n",Actual,Actual->Siguiente);
             fprintf(flujo,"NODOc_%p->NODOc_%p;\n",Actual->Siguiente,Actual);
            }


            Actual=Actual->Siguiente;
        }
    }

    fprintf(flujo,"label=\"Lista Doble Enlazada .\nReporte Fichas Jugador 1: %s.\";\nfontsize =15;\n }",jugador1.c_str());
    }

    fflush(flujo);
    fclose(flujo);

}

void LDEJugador::GraficarLDE2(NODOLDEJUGA *primero,string jugador2)
{
    FILE *flujo = fopen("LDEJFisJug2.txt","w");

    if(flujo==NULL)
    { perror("Error en la creacion del archivo.\n"); }
    else
    {
    fprintf(flujo,"digraph LDEJFisJug2{\n");
    fprintf(flujo,"rankdir=LR\n");

    NODOLDEJUGA *Actual=primero;

    if(Actual!=NULL)
    {
        while (Actual!=NULL)
        {
            fprintf(flujo,"NODOc_%p[shape=rectangle,color=Red,style=filled,fillcolor=Skyblue,label=\"Ficha: %s\nPuntaje: %d  \"];\n",Actual,Actual->letra.c_str(),Actual->puntajeletra);
            Actual=Actual->Siguiente;
        }

        Actual = primero;

        while (Actual!=NULL)
        {
            if(Actual->Siguiente==NULL)
            {
               // fprintf(flujo,"NODOc_%d;\n",Actual,Actual->Siguiente);
            }
            else
            {
             fprintf(flujo,"NODOc_%p->NODOc_%p;\n",Actual,Actual->Siguiente);
             fprintf(flujo,"NODOc_%p->NODOc_%p;\n",Actual->Siguiente,Actual);
            }


            Actual=Actual->Siguiente;
        }
    }

    fprintf(flujo,"label=\"Lista Doble Enlazada .\nReporte Fichas Jugador 2: %s.\";\nfontsize =15;\n }",jugador2.c_str());
    }

    fflush(flujo);
    fclose(flujo);

}

void LDEJugador::EliminarLDEOFinal()
{
    NODOLDEJUGA *Actual= primero;
    NODOLDEJUGA *Anterior = NULL;

    if(Actual!=NULL)
    {
       // printf("Inicio de la lista doble enlazada ordenada.\n");

        while(Actual!=NULL)
        {

            if(Actual==primero&& Actual==ultimo)
                {
                    primero=NULL;
                    ultimo=NULL;
                 //printf("Nodo Que Se Elimino = %d hera el ultimo de la lista.\n",Actual->Identificador);
                }
                else if(Actual==ultimo)
                {
                    Anterior->Siguiente=NULL;
                    ultimo=Anterior;
                    //printf("Nodo Que Se Elimino Se Encontraba al final = %d .\n",Actual->Identificador);
                }
            Anterior=Actual;//Aca queda el nodo eliminado.
            Actual=Actual->Siguiente;
        }
       // printf("Fin de la lista doble enlazada ordenada.\n");
    }
    else
    {
        cout<<"La lista doble se encuentra vacia.\n";
    }
}


void LDEJugador::EliminarLDEO(string caracter)
{
    NODOLDEJUGA *Actual= primero;
    NODOLDEJUGA *Anterior = NULL;
    bool Encontrado=false;

    if(Actual!=NULL)
    {
       // printf("Inicio de la lista doble enlazada ordenada.\n");

        while(Actual!=NULL && Encontrado!=true)
        {

            if(Actual->letra==caracter)
            {

                if(Actual==primero&& Actual==ultimo)
                {
                    primero=NULL;
                    ultimo=NULL;
                 //printf("Nodo Que Se Elimino = %d hera el ultimo de la lista.\n",Actual->Identificador);
                } else if(Actual==primero)
                {

                    primero = primero->Siguiente;
                    primero->Anterior=NULL;
                    //printf("Nodo Que Se Elimino Se Encontraba al inicio = %d .\n",Actual->Identificador);
                }
                else if(Actual==ultimo)
                {
                    Anterior->Siguiente=NULL;
                    ultimo=Anterior;
                    //printf("Nodo Que Se Elimino Se Encontraba al final = %d .\n",Actual->Identificador);
                }
                else
                {
                    Anterior->Siguiente = Actual->Siguiente;
                    Actual->Siguiente->Anterior = Anterior;
                    //printf("Nodo Que Se Elimino Se Encontraba al medio = %d .\n",Actual->Identificador);
                }


                Encontrado=true;
            }
            Anterior=Actual;//Aca queda el nodo eliminado.
            Actual=Actual->Siguiente;
        }

        if(Encontrado==false)
        {
            printf("Nodo No Encontrado.\n");
        }

       // printf("Fin de la lista doble enlazada ordenada.\n");
    }
    else
    {
        printf("La lista doble se encuentra vacia.\n");
    }
}


NODOLDEJUGA *LDEJugador::obtenerLetraLDE(string letraX)
{

    NODOLDEJUGA *actual = primero;

       while(actual!=NULL)
       {
       if(actual->letra==letraX)
           {
               return actual;
           }
           actual = actual->Siguiente;
       }
    return NULL;
}
