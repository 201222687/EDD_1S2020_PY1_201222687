#include "ListaSimple.h"

ListaSimple::ListaSimple()
{
 this->primero=this->ultimo=NULL;
}

void ListaSimple::InsertarLS(NodoLS *nuevo)
{

    if(primero==NULL)
             {
               primero=ultimo=nuevo;
             }
             else
               {
        //Insercion al final de la lista simple enlazada
                ultimo->Siguiente =nuevo;
                ultimo=nuevo;
            }
}




void ListaSimple::InsertarLSOrdenado(NodoLS *nuevo)
{
//********************************inicio insercion lista doblemente enlazada ordenada**********************//
               if(primero==NULL)
               {
                   primero=ultimo=nuevo;
               }
               else
               {
               //Insercion al inicio de la lista doblemente enlazada.
                   if(nuevo->puntaje>primero->puntaje)
                   {
                       nuevo->Siguiente=primero;
                       primero= nuevo;
                   }
                   else
                   {
                       NodoLS *actual = primero;

                       while (actual->Siguiente!=NULL)
                       {
                 //Insercion en el medio de la lista doblemente enlazada.
                           if(nuevo->puntaje>actual->Siguiente->puntaje)
                           {
                               nuevo->Siguiente = actual->Siguiente;
                               actual->Siguiente=nuevo;
                               break;
                           }
                          actual = actual->Siguiente;
                       }

                 //Insercion al final de la lista doblemente enlazada .
                       if(actual->Siguiente==NULL)
                       {
                           actual->Siguiente =nuevo;
                           ultimo=nuevo;
                       }


                   }


               }
//************************************************************Fin insercion**********************//

            cout<<"Puntaje Ingresado Exitosamente..\n"<<endl;
}



void ListaSimple::MostrarLS_PrimeroUltimo(NodoLS *primeroIn)
{

    NodoLS *Actual=primero;

    if(Actual!=NULL)
        {
       cout<<"Inicio de la lista simple.\n"<<endl;
       cout<<"Del primer nodo al ultimo nodo.\n"<<endl;
        while(Actual!=NULL)
        {
            cout<<"Jugador :"<<Actual->jugador<<endl;
            Actual=Actual->Siguiente;
        }
        cout<<"Fin de la lista simple.\n";
        }
        else
        {
        cout<<"La lista simple se encuentra vacia.\n";
        }
}

void ListaSimple::MostrarLS_PrimeroUltimoOrdenada(NodoLS *primeroIn)
{

    NodoLS *Actual=primero;

    if(Actual!=NULL)
        {
       cout<<"Inicio de la lista simple ordenada.\n"<<endl;
       cout<<"Del primer nodo al ultimo nodo.\n"<<endl;
        while(Actual!=NULL)
        {
            cout<<"Puntaje :"<<Actual->puntaje<<endl;
            Actual=Actual->Siguiente;
        }
        cout<<"Fin de la lista simple.\n";
        }
        else
        {
        cout<<"La lista simple se encuentra vacia.\n";
        }
}

void ListaSimple::MostrarLSOrdenadaPuntajes(NodoLS *primeroIn)
{

    NodoLS *Actual=primeroIn;

    if(Actual!=NULL)
        {
       cout<<"Inicio lista simple ordenada Puntaje General.\n"<<endl;
       cout<<"Del primer nodo al ultimo nodo.\n"<<endl;
        while(Actual!=NULL)
        {
            //cout<<"Puntaje :"<<Actual->puntaje<<"Jugador:"<<Actual->jugador<<endl;
            cout<<"Jugador:"<<Actual->jugador<<"Puntaje :"<<Actual->puntaje<<endl;
            Actual=Actual->Siguiente;
        }
        cout<<"Fin de la lista simple ordenada.\n";
        }
        else
        {
        cout<<"La lista simple se encuentra vacia.\n";
        }
}


void ListaSimple::GraficarLSimple(NodoLS *primeroIn)
{
    FILE *flujo = fopen("LSPreorden.txt","w");

    if(flujo==NULL) { perror("Error en la creacion del archivo.\n"); }
    else
    {
    fprintf(flujo,"digraph LSimple{\n");
    fprintf(flujo,"rankdir=LR\n");
    NodoLS *Actual=primero;

    if(Actual!=NULL)
    {
        while (Actual!=NULL)
        {
        fprintf(flujo,"NODOc_%p[shape=rectangle,color=Red,style=filled,fillcolor=Green,label=\"%s\n\"];\n",Actual,Actual->jugador.c_str());
        Actual=Actual->Siguiente;
        }

        Actual = primero;

        while (Actual!=NULL)
        {
            if(Actual->Siguiente==NULL)
            {

            }else
            {
                fprintf(flujo,"NODOc_%p->NODOc_%p;\n",Actual,Actual->Siguiente);
            }
             Actual=Actual->Siguiente;
        }
    }

    fprintf(flujo,"label=\"Reporte Recorrido Preorden Del ABB.\";\nfontsize =15;\n }");
    }

    fflush(flujo);
    fclose(flujo);

}

void ListaSimple::GraficarLSimple2(NodoLS *primeroIn)
{
    FILE *flujo = fopen("LSInorden.txt","w");

    if(flujo==NULL) { perror("Error en la creacion del archivo.\n"); }
    else
    {
    fprintf(flujo,"digraph LSimple{\n");
    fprintf(flujo,"rankdir=LR\n");
    NodoLS *Actual=primero;

    if(Actual!=NULL)
    {
        while (Actual!=NULL)
        {
        fprintf(flujo,"NODOc_%p[shape=rectangle,color=Red,style=filled,fillcolor=Green,label=\"%s\n\"];\n",Actual,Actual->jugador.c_str());
        Actual=Actual->Siguiente;
        }

        Actual = primero;

        while (Actual!=NULL)
        {
            if(Actual->Siguiente==NULL)
            {

            }else
            {
                fprintf(flujo,"NODOc_%p->NODOc_%p;\n",Actual,Actual->Siguiente);
            }
             Actual=Actual->Siguiente;
        }
    }

    fprintf(flujo,"label=\"Reporte Recorrido Inorden Del ABB.\";\nfontsize =15;\n }");
    }

    fflush(flujo);
    fclose(flujo);

}

void ListaSimple::GraficarLSimple3(NodoLS *primeroIn)
{
    FILE *flujo = fopen("LSPostorden.txt","w");

    if(flujo==NULL) { perror("Error en la creacion del archivo.\n"); }
    else
    {
    fprintf(flujo,"digraph LSimple{\n");
    fprintf(flujo,"rankdir=LR\n");
    NodoLS *Actual=primero;

    if(Actual!=NULL)
    {
        while (Actual!=NULL)
        {
        fprintf(flujo,"NODOc_%p[shape=rectangle,color=Red,style=filled,fillcolor=Green,label=\"%s\n\"];\n",Actual,Actual->jugador.c_str());
        Actual=Actual->Siguiente;
        }

        Actual = primero;

        while (Actual!=NULL)
        {
            if(Actual->Siguiente==NULL)
            {

            }else
            {
                fprintf(flujo,"NODOc_%p->NODOc_%p;\n",Actual,Actual->Siguiente);
            }
             Actual=Actual->Siguiente;
        }
    }

    fprintf(flujo,"label=\"Reporte Recorrido Postorden Del ABB.\";\nfontsize =15;\n }");
    }

    fflush(flujo);
    fclose(flujo);

}

void ListaSimple::GraficarPuntajeJugador(NodoLS *primeroIn,string Usuario)
{
    FILE *flujo = fopen("PuntajeJugador.txt","w");

    if(flujo==NULL) { perror("Error en la creacion del archivo.\n"); }
    else
    {
    fprintf(flujo,"digraph PuntajeJugador{\n");
    fprintf(flujo,"rankdir=LR\n");
    NodoLS *Actual=primero;

    if(Actual!=NULL)
    {
        while (Actual!=NULL)
        {
        fprintf(flujo,"NODOc_%p[shape=rectangle,color=Red,style=filled,fillcolor=Green,label=\"%d\n\"];\n",Actual,Actual->puntaje);
        Actual=Actual->Siguiente;
        }

        Actual = primero;

        while (Actual!=NULL)
        {
            if(Actual->Siguiente==NULL)
            {

            }else
            {
                fprintf(flujo,"NODOc_%p->NODOc_%p;\n",Actual,Actual->Siguiente);
            }
             Actual=Actual->Siguiente;
        }
    }
    fprintf(flujo,"label=\"Lista Simple Ordenada\nHistorial De Puntaje Por Jugador: \n %s\";\nfontsize =15;\n }",Usuario.c_str());


    }

    fflush(flujo);
    fclose(flujo);

}


void ListaSimple::GraficarPuntajeGeneral(NodoLS *primeroIn)
{
    FILE *flujo = fopen("PuntajeGeneral.txt","w");

    if(flujo==NULL) { perror("Error en la creacion del archivo.\n"); }
    else
    {
    fprintf(flujo,"digraph PuntajeGeneral{\n");
    fprintf(flujo,"rankdir=LR\n");
    NodoLS *Actual=primeroIn;

    if(Actual!=NULL)
    {
        while (Actual!=NULL)
        {
        fprintf(flujo,"NODOc_%p[shape=rectangle,color=Red,style=filled,fillcolor=Green,label=\"jugador: %s\nPuntaje: %d\n\"];\n",Actual,Actual->jugador.c_str(),Actual->puntaje);
        Actual=Actual->Siguiente;
        }

        Actual = primeroIn;

        while (Actual!=NULL)
        {
            if(Actual->Siguiente==NULL)
            {

            }else
            {
                fprintf(flujo,"NODOc_%p->NODOc_%p;\n",Actual,Actual->Siguiente);
            }
             Actual=Actual->Siguiente;
        }
    }
    fprintf(flujo,"label=\"Scoreboard Lista Simple Ordenada\nLos Mejores Puntajes Del Juego.\";\nfontsize =15;\n }");


    }

    fflush(flujo);
    fclose(flujo);

}


