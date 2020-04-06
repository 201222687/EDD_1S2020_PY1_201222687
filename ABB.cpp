#include "ABB.h"



ABB::ABB()
{
    this->raiz=NULL;

}

void ABB::InsertarNodoABB(NODOABB **raiz, int NumeroX)
{
    if((*raiz)==NULL)
    {
        NODOABB *NuevoNodo = new NODOABB(NumeroX);

        (*raiz)=NuevoNodo;
    }
    else
    {
        if(NumeroX<(*raiz)->Numero)
        //if(strcmp(raiz->PalabraBuscada.c_str(),primero->PalabraBuscada.c_str())<0)
        {
            InsertarNodoABB(&(*raiz)->Izquierdo,NumeroX);
        }
        else if(NumeroX>(*raiz)->Numero)
        {
           InsertarNodoABB(&(*raiz)->Derecho,NumeroX);
        }
    }

}

void ABB::InsertarNodoABBString(NODOABB **raiz, string JugadorX)
{
    if((*raiz)==NULL)
    {
        NODOABB *NuevoNodo = new NODOABB(JugadorX);

        (*raiz)=NuevoNodo;
    }
    else
    {
        //if(NumeroX<(*raiz)->Numero)
        //if(strcmp(JugadorX.c_str(),(*raiz)->jugador.c_str())<0)
        if(JugadorX<(*raiz)->jugador)
        {
            InsertarNodoABBString(&(*raiz)->Izquierdo,JugadorX);
        }
        else //if(NumeroX>(*raiz)->Numero)
            //if(strcmp(JugadorX,(*raiz)->JugadorX.c_str())<0)
        {
           InsertarNodoABBString(&(*raiz)->Derecho,JugadorX);
        }
    }

}

void ABB::MostrarABB(NODOABB *raiz, int contador)
{
    if(raiz==NULL)
    {
        //cout<<"ABB vacio"<<endl;
        return;
    }
    else
    {
        MostrarABB(raiz->Derecho,contador+1);

        for(int i=0; i<contador;i++)
        {
            cout<<"-->";
        }
        cout<<raiz->Numero;

        MostrarABB(raiz->Izquierdo,contador+1);
    }

}

void ABB::MostrarABBjugador(NODOABB *raiz)
{
    if(raiz!=NULL)
    {
        RecorrerABBjugador(raiz);
    }else
    {
        cout<<"Arbol Binario se encuentra vacio"<<endl;
    }

}
void ABB::RecorrerABBjugador(NODOABB *raiz)
{
    if(raiz)
    {

        RecorrerABBjugador(raiz->Izquierdo);
        cout<<raiz->jugador<<endl;
        RecorrerABBjugador(raiz->Derecho);
    }
}


void ABB::RecorrerABBPuntajeGeneral(NODOABB *raiz)
{
    if(raiz)
    {
        RecorrerABBPuntajeGeneral(raiz->Izquierdo);
        //cout<<raiz->jugador<<endl;
        if(raiz->POOLSOrdenada->primero!=NULL)
        {
        NodoLS *dato = new NodoLS(raiz->jugador,raiz->POOLSOrdenada->primero->puntaje);
        POOLSPMejoresPuntajes->InsertarLSOrdenado(dato);
        }

        RecorrerABBPuntajeGeneral(raiz->Derecho);
    }
}

void ABB::Recorrido_Pre_Orden(NODOABB *raiz)
{
    if(raiz)
    {   //cout<<raiz->jugador+"->";
        NodoLS *dato = new NodoLS(raiz->jugador);
        POOLSPreorden->InsertarLS(dato);
        Recorrido_Pre_Orden(raiz->Izquierdo);
        Recorrido_Pre_Orden(raiz->Derecho);
    }

}

void ABB::Recorrido_En_Orden(NODOABB *raiz)
{
    if(raiz)
    {

       Recorrido_En_Orden(raiz->Izquierdo);
       //cout<<raiz->jugador<<endl;
       NodoLS *dato = new NodoLS(raiz->jugador);
       POOLSInorden->InsertarLS(dato);
       Recorrido_En_Orden(raiz->Derecho);
    }
}

void ABB::Recorrido_Post_Orden(NODOABB *raiz)
{
    if(raiz)
    {
        Recorrido_Post_Orden(raiz->Izquierdo);
        Recorrido_Post_Orden(raiz->Derecho);
        NodoLS *dato = new NodoLS(raiz->jugador);
        POOLSPostorden->InsertarLS(dato);
       // cout<<raiz->jugador<<endl;
    }
}

void ABB::GraficarABB(NODOABB *raiz)
{
    //*Resultado = *Resultado + "digraph ArbolABB{\n";
    //*Resultado = *Resultado + "rankdir=TB\n";
    //*Resultado = *Resultado + "\nlabel=\"Arbol Binario De Busqueda.\";\nfontsize =15;\n }";

    FILE *flujo = fopen("ArbolBusqueda.txt","w");
    if(flujo==NULL) { perror("Error en la creacion del archivo.\n"); }
    else
    {
    fprintf(flujo,"digraph ArbolABB{\n");
    fprintf(flujo,"rankdir=TB\n");

    if(raiz!=NULL)
    {

    string Resultado="";
    RecorrerNodosParaGraficarABB(flujo,raiz);
    //fprintf(flujo,"%s\n",Resultado.c_str());
    }

    fprintf(flujo,"label=\"Arbol Binario De Busqueda\nReporte De Jugadores.\";\nfontsize =15;\n }");


    fflush(flujo);
    fclose(flujo);
    }

}

void ABB::RecorrerNodosParaGraficarABB(FILE *flujo,NODOABB *raiz)
{
    if (raiz != NULL)
     {
      fprintf(flujo,"NODOc_%p[shape=rectangle,color=Red,style=filled,fillcolor=Skyblue,label=\"%s\n\"];\n",raiz,raiz->jugador.c_str());
      //*Resultado = *Resultado + raiz +"[shape=rectangle,color=Red,style=filled,fillcolor=Skyblue,label= ID_"+std::to_string(raiz->Numero)+"];\n";
         if (raiz->Izquierdo != NULL)
            {
      fprintf(flujo,"NODOc_%p[shape=rectangle,color=Red,style=filled,fillcolor=Skyblue,label=\"%s\n\"];\n",raiz->Izquierdo,raiz->Izquierdo->jugador.c_str());
      fprintf(flujo,"NODOc_%p->NODOc_%p;\n",raiz,raiz->Izquierdo);
      //*Resultado = *Resultado + std::to_string(raiz->Izquierdo)+"[shape=rectangle,color=Red,style=filled,fillcolor=Skyblue,label= ID_"+std::to_string(raiz->Izquierdo->Numero)+"];\n";
      //*Resultado = *Resultado +"\n" + std::to_string(raiz)+"->"+std::to_string(raiz->Izquierdo)+ ";\n";
            }
         if (raiz->Derecho != NULL)
            {
      fprintf(flujo,"NODOc_%p[shape=rectangle,color=Red,style=filled,fillcolor=Skyblue,label=\"%s\n\"];\n",raiz->Derecho,raiz->Derecho->jugador.c_str());
      fprintf(flujo,"NODOc_%p->NODOc_%p;\n",raiz,raiz->Derecho);
     //*Resultado = *Resultado +std::to_string(raiz->Derecho->Numero)+"[shape=rectangle,color=Red,style=filled,fillcolor=Skyblue,label= ID_"+std::to_string(raiz->Derecho->Numero)+"];\n";
     //*Resultado = *Resultado + "\n" + std::to_string(raiz->Numero)+"->"+std::to_string(raiz->Derecho->Numero)+ ";\n";
            }
      RecorrerNodosParaGraficarABB(flujo,raiz->Izquierdo);
     // Llamada recursiva  para recorrer el subárbol izquierdo
      RecorrerNodosParaGraficarABB(flujo,raiz->Derecho);
     // Llamada recursiva  para recorrer el subárbol derecho
     }
}


NODOABB *ABB::ObtenerNodoABB(string Usuario)
{

        NODOABB *aux = raiz;

        while(aux->jugador!=Usuario)
            {
                if(Usuario<aux->jugador)
                    {
                        aux=aux->Izquierdo;
                    }else
                    {
                        aux=aux->Derecho;
                    }

                if(aux==NULL)
                {
                 return NULL;
                }

            }
            return aux;
}


