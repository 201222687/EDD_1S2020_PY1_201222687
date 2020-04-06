#include "matrizortogonal.h"

matrizortogonal::matrizortogonal()
{

    this->ListaCabezasColumna = new ldecencabezados();
    this->ListaCabezasFila= new ldecencabezados();

    this->CreacionNodoInicial = new Terminal("Matriz");
    this->CreacionNodoInicial->AccesoDerechaLDEC=ListaCabezasColumna;
    this->CreacionNodoInicial->AccesoAbajoLDEC=ListaCabezasFila;
    //cout<<CreacionNodoInicial->valor.toStdString()<<endl;

}

void matrizortogonal::InsertarEnMatrizOrtogonal(int fila, int columna, string valor, int puntajeM)
{
    nodoortogonal *NuevoOrtogonal = new nodoortogonal(fila,columna,valor, puntajeM);

//------------------------INICIO---INSERCION EN FILAS------------------------------//
    cabezanodoldec *CabezaFila = ListaCabezasFila->obtenerEncabezado(fila);

    if(CabezaFila==NULL)//Si no existe encabezado de fila se crea;
    {
        CabezaFila = new cabezanodoldec(fila);
        ListaCabezasFila->insertarenldec(CabezaFila);
        CabezaFila->accesonodoortogonal=NuevoOrtogonal;
    }
    else
    {
        //Insercion al inicio de la fila a mano derecha.

        if(NuevoOrtogonal->columna==CabezaFila->accesonodoortogonal->columna)
        {

        }
        else if(NuevoOrtogonal->columna<CabezaFila->accesonodoortogonal->columna)
        {
            NuevoOrtogonal->derecha=CabezaFila->accesonodoortogonal;
            CabezaFila->accesonodoortogonal->izquierda=NuevoOrtogonal;
            CabezaFila->accesonodoortogonal=NuevoOrtogonal;
        }
        else
        {
            nodoortogonal *actual = CabezaFila->accesonodoortogonal;


            while (actual->derecha!=NULL)
            {

                if(NuevoOrtogonal->columna==actual->derecha->columna)
                {
                break;
                }

                //Insercion en el medio de la fila a mano derecha.
                if(NuevoOrtogonal->columna<actual->derecha->columna)
                {
                    NuevoOrtogonal->derecha=actual->derecha;
                    actual->derecha->izquierda=NuevoOrtogonal;
                    NuevoOrtogonal->izquierda=actual;
                    actual->derecha=NuevoOrtogonal;
                    break;
                }

                actual=actual->derecha;
            }

        //Insercion al final de la fila.
            if(actual->derecha==NULL)
            {
                actual->derecha=NuevoOrtogonal;
                NuevoOrtogonal->izquierda=actual;
            }

        }

    }
//------------------------FIIN---INSERCION EN FILAS------------------------------//

//**************************INICIO***INSERCION**EN**COLUMNAS************************//
    cabezanodoldec *CabezaColumna = ListaCabezasColumna->obtenerEncabezado(columna);

    if(CabezaColumna==NULL)//sino existe encabezado de columna se crea.
    {
        CabezaColumna= new cabezanodoldec(columna);
        ListaCabezasColumna->insertarenldec(CabezaColumna);
        CabezaColumna->accesonodoortogonal=NuevoOrtogonal;
    }
    else
    {
        //Insercion al inicio de la columna hacia abajo.

        if(NuevoOrtogonal->fila==CabezaColumna->accesonodoortogonal->fila)
        {

        }
        else if(NuevoOrtogonal->fila<CabezaColumna->accesonodoortogonal->fila)
        {
            NuevoOrtogonal->abajo=CabezaColumna->accesonodoortogonal;
            CabezaColumna->accesonodoortogonal->arriba=NuevoOrtogonal;
            CabezaColumna->accesonodoortogonal=NuevoOrtogonal;

        }else
        {
            nodoortogonal *actual = CabezaColumna->accesonodoortogonal;

            while(actual->abajo!=NULL)
            {
                if(NuevoOrtogonal->fila==actual->abajo->fila)
                {
                break;
                }
          //Insercion en el medio de la columna hacia abajo.
                if(NuevoOrtogonal->fila<actual->abajo->fila)
                {
                    NuevoOrtogonal->abajo=actual->abajo;
                    actual->abajo->arriba=NuevoOrtogonal;
                    NuevoOrtogonal->arriba=actual;
                    actual->abajo=NuevoOrtogonal;
                   break;
                }
                actual=actual->abajo;
            }


        //Insercion al final de la columna.
            if(actual->abajo==NULL)
            {
                actual->abajo=NuevoOrtogonal;
                NuevoOrtogonal->arriba=actual;
            }
        }

    }
    //**************************FIN***INSERCION**EN**COLUMNAS************************//
}

void matrizortogonal::RecorrerFilas()
{
    cabezanodoldec *CabezaFila = ListaCabezasFila->primero;

    cout<<"Recorrido por filas:\n"<<endl;

    if(CabezaFila)
    {

        do{

            nodoortogonal *actual = CabezaFila->accesonodoortogonal;

            while(actual!=NULL)
            {

                if(CabezaFila->siguiente!=ListaCabezasFila->primero || actual->derecha!=NULL)
                {
                    cout<<actual->valor<<"->";
                }else
                {
                    cout<<actual->valor;
                }

                actual=actual->derecha;
            }

            CabezaFila = CabezaFila->siguiente;

        }while (CabezaFila!=ListaCabezasFila->primero) ;

        cout<<"\n"<<endl;
    }
}

void matrizortogonal::RecorrerColumnas()
{
   cout<<"\n";
   cout<<"Recorrido por columnas:\n";

   cabezanodoldec *CabezaColumna = ListaCabezasColumna->primero;

   if(CabezaColumna)
   {

       do
       {
           nodoortogonal *actual = CabezaColumna->accesonodoortogonal;

           while(actual!=NULL)
           {
               if(CabezaColumna->siguiente!=ListaCabezasColumna->primero||actual->abajo!=NULL)
               {
                   cout<<actual->valor<<"->";

               }
               else
               {
                   cout<<actual->valor;
               }
               actual = actual->abajo;
           }

          CabezaColumna =CabezaColumna->siguiente;

       }while(CabezaColumna!=ListaCabezasColumna->primero);
       cout<<endl;

   }
}

string matrizortogonal::RecorrerFilasPa()
{
    cabezanodoldec *CabezaFila = ListaCabezasFila->primero;

    cout<<"Recorrido por filas:\n"<<endl;

    string palabra = "";
    if(CabezaFila)
    {

        do{

            nodoortogonal *actual = CabezaFila->accesonodoortogonal;

            while(actual!=NULL)
            {

                if(CabezaFila->siguiente!=ListaCabezasFila->primero || actual->derecha!=NULL)
                {
                    cout<<actual->valor<<"->";
                    palabra+= actual->valor;
                }else
                {
                    cout<<actual->valor;
                    palabra+= actual->valor;
                }

                actual=actual->derecha;
            }

            CabezaFila = CabezaFila->siguiente;

        }while (CabezaFila!=ListaCabezasFila->primero) ;

        cout<<"\n"<<endl;
    }
    return palabra;
}

string matrizortogonal::RecorrerColumnasPa()
{
   cout<<"\n";
   cout<<"Recorrido por columnas:\n";

   cabezanodoldec *CabezaColumna = ListaCabezasColumna->primero;
    string palabra = "";

   if(CabezaColumna)
   {

       do
       {
           nodoortogonal *actual = CabezaColumna->accesonodoortogonal;

           while(actual!=NULL)
           {
               if(CabezaColumna->siguiente!=ListaCabezasColumna->primero||actual->abajo!=NULL)
               {
                   cout<<actual->valor<<"->";
                    palabra+= actual->valor;
               }
               else
               {
                   cout<<actual->valor;
                   palabra+= actual->valor;
               }
               actual = actual->abajo;
           }

          CabezaColumna =CabezaColumna->siguiente;

       }while(CabezaColumna!=ListaCabezasColumna->primero);
       cout<<endl;

   }
   return palabra;
}

int matrizortogonal::RecorrerFilasLetraPuntaje()
{
    cabezanodoldec *CabezaFila = ListaCabezasFila->primero;

    cout<<"Recorrido por filas calculando puntaje por letra:\n"<<endl;

    int puntajetotalpalabra = 0;
    if(CabezaFila)
    {

        do{

            nodoortogonal *actual = CabezaFila->accesonodoortogonal;

            while(actual!=NULL)
            {

                if(CabezaFila->siguiente!=ListaCabezasFila->primero || actual->derecha!=NULL)
                {
                    cout<<actual->valor<<"->";
                    puntajetotalpalabra= puntajetotalpalabra + actual->PuntajeM;
                }else
                {
                    cout<<actual->valor;
                    puntajetotalpalabra= puntajetotalpalabra+actual->PuntajeM;
                }

                actual=actual->derecha;
            }

            CabezaFila = CabezaFila->siguiente;

        }while (CabezaFila!=ListaCabezasFila->primero) ;

        cout<<"\n"<<endl;
    }
    return puntajetotalpalabra;
}



void matrizortogonal::RecorrerTerminalColumnas()
{
    Terminal *term = CreacionNodoInicial;

        cout<<"\n";
        cout<<"-----Recorrido por columnas:-----\n";
        cout<<term->valor<<"->";

        cabezanodoldec *CabezaColumna = term->AccesoDerechaLDEC->primero;

        if(CabezaColumna)
        {

            do
            {
                if(CabezaColumna->siguiente!=term->AccesoDerechaLDEC->primero)
                {
                cout<<"Cabeza: "<<CabezaColumna->dato<<"{";
                }else
                {
                cout<<"Cabeza: "<<CabezaColumna->dato<<"{";
                }


                nodoortogonal *actual = CabezaColumna->accesonodoortogonal;

                while(actual!=NULL)
                {
                    if(actual->abajo!=NULL)
                    {
                        cout<<actual->valor<<"->";

                    }
                    else
                    {
                        cout<<actual->valor;
                    }
                    actual = actual->abajo;
                }
                cout<<"}";

               CabezaColumna =CabezaColumna->siguiente;

            }while(CabezaColumna!=term->AccesoDerechaLDEC->primero);



        }

        cout<<"\n";

        cout<<endl;

}

void matrizortogonal::RecorrerTerminalFilas()
{
    Terminal *term = CreacionNodoInicial;

        cout<<"\n";
        cout<<"-----Recorrido por filas:-----\n";
        cout<<term->valor<<"->";

        cabezanodoldec *CabezaFila = term->AccesoAbajoLDEC->primero;

        if(CabezaFila)
        {

            do
            {
                if(CabezaFila->siguiente!=term->AccesoAbajoLDEC->primero)
                {
                cout<<"Cabeza Fila: "<<CabezaFila->dato<<"{";
                }else
                {
                cout<<"Cabeza Fila: "<<CabezaFila->dato<<"{";
                }


                nodoortogonal *actual = CabezaFila->accesonodoortogonal;

                while(actual!=NULL)
                {
                    if(actual->derecha!=NULL)
                    {
                        cout<<actual->valor<<"->";

                    }
                    else
                    {
                        cout<<actual->valor;
                    }
                    actual = actual->derecha;
                }
                cout<<"}";

               CabezaFila =CabezaFila->siguiente;

            }while(CabezaFila!=term->AccesoAbajoLDEC->primero);



        }
        cout<<"\n";
        cout<<endl;

}

void matrizortogonal::GraficarMatrizGeneral(string Ruta)
{



    //    ofstream ArchivoMatriz(Ruta.toStdString());
    //string asegurado;
    ofstream ArchivoMatriz(Ruta);
    ArchivoMatriz<<"digraph MatrizOrtogonal{\n";

   //------------------Escribiendo el nodo terminal en el archivo-------------//
    Terminal *term = CreacionNodoInicial;
    ArchivoMatriz<<"\n"<<"rank=same{\n";
    ArchivoMatriz<<"NODOc_"<<term<<"[shape=rectangle,color=Red,style=filled,fillcolor=Skyblue,label="<<term->valor<<"];\n";
  //--------------------Escribiendo los nodos cabezera de la lista columna en el archivo.---//
    cabezanodoldec *CabezaColumna = term->AccesoDerechaLDEC->primero;
        if(CabezaColumna)
        {
          do
            {
               ArchivoMatriz<<"NODOc_"<<CabezaColumna<<"[shape=rectangle,color=Red,style=filled,fillcolor=Skyblue,label= Columna_"<<CabezaColumna->dato<<"];\n";
               CabezaColumna =CabezaColumna->siguiente;
            }while(CabezaColumna!=term->AccesoDerechaLDEC->primero);

        }
  ArchivoMatriz<<"\n}";

  ArchivoMatriz<<"\n"<<"rank=TD{\n";
  //--------------------Escribiendo los nodos cabecera de la lista fila en el archivo.---//
    cabezanodoldec *CabezaFila = term->AccesoAbajoLDEC->primero;
            if(CabezaFila)
        {
          do
            {
               ArchivoMatriz<<"NODOc_"<<CabezaFila<<"[shape=rectangle,color=Red,style=filled,fillcolor=Skyblue,label=Fila_"<<CabezaFila->dato<<"];\n";
               CabezaFila =CabezaFila->siguiente;
            }while(CabezaFila!=term->AccesoAbajoLDEC->primero);
        }
   ArchivoMatriz<<"\n}";
   //--------------------Escribiendo Nodos Ortogonales en el archivo---//
   CabezaFila = term->AccesoAbajoLDEC->primero;
   if(CabezaFila)
   {
     do
       {
           nodoortogonal *actual = CabezaFila->accesonodoortogonal;
           while(actual!=NULL)
           {
            ArchivoMatriz<<"NODOc_"<<actual<<"[shape=rectangle,color=Red,style=filled,fillcolor=Skyblue,label="<<actual->valor<<"];\n";
            actual = actual->derecha;
           }
          CabezaFila =CabezaFila->siguiente;
       }while(CabezaFila!=term->AccesoAbajoLDEC->primero);
   }
   //-----------------------Escribiendo enlaces entre las cabeceras de la lista columna-<PRIMERO HACIA ULTIMO>--//
         CabezaColumna = term->AccesoDerechaLDEC->primero;
         if(CabezaColumna)
         {
          //Escribiendo enlace del nodo terminal hacia la cabeza de la columna en el archivo--//
          ArchivoMatriz<<"NODOc_"<<term<<"->NODOc_"<<term->AccesoDerechaLDEC->primero<<";\n";
           do
             {
              //Escribiendo enlace de nodo cabezaColumna<Primero> hacia el nodo cabezaColumna<Siguiente>.
                  ArchivoMatriz<<"NODOc_"<<CabezaColumna<<"->NODOc_"<<CabezaColumna->siguiente<<";\n";
                  ArchivoMatriz<<"NODOc_"<<CabezaColumna->siguiente<<"->NODOc_"<<CabezaColumna<<";\n";
              //------------------------------------------

              ArchivoMatriz<<"\n"<<"rank=TD{\n";
              //Escribiendo enlace de cabezaColumna hacia el nodo ortogonal de acceso.
              ArchivoMatriz<<"NODOc_"<<CabezaColumna<<"->NODOc_"<<CabezaColumna->accesonodoortogonal<<";\n";

               nodoortogonal *actual = CabezaColumna->accesonodoortogonal;
               //Escribiendo enlace hacia abaja y arriba entre los nodos ortogonales<Primero hasta llegar a null>.
                     while(actual!=NULL)
                     {
                         if(actual->abajo!=NULL)
                         {
                          ArchivoMatriz<<"NODOc_"<<actual<<"->NODOc_"<<actual->abajo<<";\n";
                          ArchivoMatriz<<"NODOc_"<<actual->abajo<<"->NODOc_"<<actual<<";\n";
                         }
                         if(actual->abajo==NULL)
                         {
                            ArchivoMatriz<<"NODOc_"<<actual<<";\n";
                         }
                      actual = actual->abajo;
                     }
               ArchivoMatriz<<"\n}";
                CabezaColumna =CabezaColumna->siguiente;
             }while(CabezaColumna!=term->AccesoDerechaLDEC->primero);
          }


   //-----------------------Escribiendo enlaces entre las cabeceras de la lista fila-<PRIMERO HACIA ULTIMO>--//
           CabezaFila = term->AccesoAbajoLDEC->primero;
           if(CabezaFila)
           {
            //Escribiendo enlace del nodo terminal hacia la cabeza de la fila en el archivo--//
            ArchivoMatriz<<"NODOc_"<<term<<"->NODOc_"<<term->AccesoAbajoLDEC->primero<<";\n";
             do
               {
                //Escribiendo enlace de nodo cabezafila<Primero> hacia el nodo cabezafila<Siguiente>.
                    ArchivoMatriz<<"NODOc_"<<CabezaFila<<"->NODOc_"<<CabezaFila->siguiente<<";\n";
                    ArchivoMatriz<<"NODOc_"<<CabezaFila->siguiente<<"->NODOc_"<<CabezaFila<<";\n";
                //---------------------------------

                ArchivoMatriz<<"\n"<<"rank=same{\n";
                //Escribiendo enlace de cabezaFila hacia el nodo ortogonal de acceso.
                    ArchivoMatriz<<"NODOc_"<<CabezaFila<<"->NODOc_"<<CabezaFila->accesonodoortogonal<<";\n";

                    nodoortogonal *actual = CabezaFila->accesonodoortogonal;
                    //Escribiendo enlace hacia la derecha e izquierda entre los nodos ortogonales<Primero hasta llegar a null>.
                       while(actual!=NULL)
                       {
                           if(actual->derecha!=NULL)
                           {
                            ArchivoMatriz<<"NODOc_"<<actual<<"->NODOc_"<<actual->derecha<<";\n";
                            ArchivoMatriz<<"NODOc_"<<actual->derecha<<"->NODOc_"<<actual<<";\n";
                           }
                           if(actual->derecha==NULL)
                           {
                              ArchivoMatriz<<"NODOc_"<<actual<<";\n";
                           }
                        actual = actual->derecha;
                       }
                  ArchivoMatriz<<"\n}";

                  CabezaFila =CabezaFila->siguiente;
               }while(CabezaFila!=term->AccesoAbajoLDEC->primero);
            }

   //----------------
    ArchivoMatriz<<"label=\"Matriz Ortogonal\";\nfontsize =15;\n }";
     ArchivoMatriz.close();

}


