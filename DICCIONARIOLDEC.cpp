#include "DICCIONARIOLDEC.h"

void DICCIONARIOLDEC::insertarenldec(DICNODOLDEC *nuevo)
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
                ultimo->siguiente =nuevo;
                nuevo->anterior = ultimo;
                nuevo->siguiente=primero;
                primero->anterior=nuevo;
                ultimo=nuevo;
    }
}
    //********************************Fin insercion**********************//

void DICCIONARIOLDEC::DICmostrarLDEC(DICNODOLDEC *PrimeroIn)
{
    DICNODOLDEC *Actual = PrimeroIn;

    if(Actual!=NULL)
     {
       cout<<"---INICIO---Mostrando Lista Doblemente Enlazada Circular Primero Ultimo.-----------"<<"\n"<<endl;

        do
        {
        cout<<"Palabra :"<<Actual->palabra <<"\n";


        Actual = Actual->siguiente;
        }while(Actual != primero);
       cout<<"---FIN---Mostrando Lista Doblemente Enlazada Circular Primero Ultimo.-----------"<<"\n"<<endl;

      }
      else
       {
       cout<<"Lista Doblemente Enlazada Circular Se Encuentra Vacia."<<"\n"<<endl;
       }
}

void DICCIONARIOLDEC::UPDICmostrarLDEC(DICNODOLDEC *UltimoIn)
{
    DICNODOLDEC *Actual = UltimoIn;

    if(Actual!=NULL)
     {
       cout<<"---INICIO---Mostrando Lista Doblemente Enlazada Circular ULTIMO PRIMERO.-----------"<<"\n"<<endl;

        do
        {
        cout<<"Palabra :"<<Actual->palabra <<"\n";


        Actual = Actual->anterior;
        }while(Actual != ultimo);
       cout<<"---FIN---Mostrando Lista Doblemente Enlazada Circular ULTIMO PRIMERO.-----------"<<"\n"<<endl;

      }
      else
       {
       cout<<"Lista Doblemente Enlazada Circular Se Encuentra Vacia."<<"\n"<<endl;
       }
}

void DICCIONARIOLDEC::GraficarLDEC(DICNODOLDEC *PrimeroIn)
{
  //FILE *flujo = fopen("/home/maldonado/Escritorio/EDD_1S2020_P1_201222687/JCPractica2020/imagenes/LCircular.txt","w");

  FILE *flujo = fopen("LDECircular.txt","w");
    if(flujo==NULL) { perror("Error en la creacion del archivo.\n"); }
    else
    {
    fprintf(flujo,"digraph LCE{\n");
    fprintf(flujo,"rankdir=LR\n");
    DICNODOLDEC *Actual=primero;

    if(Actual!=NULL)
    {
        do
        {
            fprintf(flujo,"NODOc_%p[shape=rectangle,color=Red,style=filled,fillcolor=Skyblue,label=\"%s\n\"];\n",Actual,Actual->palabra.c_str());
            Actual=Actual->siguiente;
        }while(Actual!=primero);

        do
        {
            if(Actual->siguiente==NULL)
            {

            }
            else
            {
             fprintf(flujo,"NODOc_%p->NODOc_%p;\n",Actual,Actual->siguiente);
             fprintf(flujo,"NODOc_%p->NODOc_%p;\n",Actual->siguiente,Actual);

            }

            Actual=Actual->siguiente;
        }while (Actual!=primero);
    }

    fprintf(flujo,"label=\"Lista Doblemente Enlazada Circular\nReporte De Diccionario.\";\nfontsize =15;\n }");
    }

    fflush(flujo);
    fclose(flujo);

}


DICNODOLDEC  *DICCIONARIOLDEC::obtenerPalabra(string palabra)
{

    DICNODOLDEC *actual = primero;


   if(actual)
   {
       do{
           if(actual->palabra==palabra)
           {
               return actual;
           }

           actual = actual->siguiente;

       }while(actual!=primero);

   }


    return NULL;
}
