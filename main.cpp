#include <iostream>
#include <ABB.h>
#include <DICCIONARIOLDEC.h>
#include <ListaSimple.h>
#include <FICHASCOLA.h>
#include <LDEJugador.h>


#include <stdlib.h>
#include <time.h>


#include <matrizortogonal.h>

#include <fstream>
#include <jsoncpp/json/json.h> // or jsoncpp/json.h , or json/json.h etc.jsoncpp/json/json.h
//#include <jsoncpp/json.h>
//#include <json/json.h>

#include <jsoncons/json.hpp>
using namespace jsoncons;


using namespace std;




int main()
{
    //int entero = 10;
    //std::string cadena = "";
    //std::cout << "Esto es una cadena: " + std::to_string(entero) + "." << std::endl;
    //cout << std::to_string(entero) << endl;

    //POOABB->InsertarNodoABB(&POOABB->raiz,7);
    //POOABB->InsertarNodoABB(&POOABB->raiz,5);
    //POOABB->InsertarNodoABB(&POOABB->raiz,80);
    //POOABB->InsertarNodoABB(&POOABB->raiz,91);
    //POOABB->InsertarNodoABB(&POOABB->raiz,2);
    //POOABB->InsertarNodoABB(&POOABB->raiz,4);
    //POOABB->InsertarNodoABB(&POOABB->raiz,6);
    //POOABB->InsertarNodoABB(&POOABB->raiz,500);
    //POOABB->InsertarNodoABB(&POOABB->raiz,85);

    //POOABB->InsertarNodoABBString(&POOABB->raiz,"Karla");
   // POOABB->InsertarNodoABBString(&POOABB->raiz,"Esmeralda");
    //POOABB->InsertarNodoABBString(&POOABB->raiz,"Selena");
    //POOABB->InsertarNodoABBString(&POOABB->raiz,"Darla");
    //POOABB->InsertarNodoABBString(&POOABB->raiz,"Fatima");
    //POOABB->InsertarNodoABBString(&POOABB->raiz,"Omalia");
    //POOABB->InsertarNodoABBString(&POOABB->raiz,"Tere");

    //ABB *POOABB = new ABB();
    //POOABB->InsertarNodoABBString(&POOABB->raiz,"Heidy");
    //POOABB->InsertarNodoABBString(&POOABB->raiz,"Carlos");
    //POOABB->InsertarNodoABBString(&POOABB->raiz,"Antonio");
    //POOABB->InsertarNodoABBString(&POOABB->raiz,"Eduardo");
    //POOABB->InsertarNodoABBString(&POOABB->raiz,"Rodrigo");
    //POOABB->Recorrido_Pre_Orden(POOABB->raiz);
    //POOABB->Recorrido_En_Orden(POOABB->raiz);
    //POOABB->Recorrido_Post_Orden(POOABB->raiz);
    //POOABB->GraficarABB(POOABB->raiz);
    //system("dot -Tpng ArbolBusqueda.txt -o ArbolBusqueda.png");
    //system("xdg-open ArbolBusqueda.png");
    //POOABB->POOLSPreorden->GraficarLSimple(POOABB->POOLSPreorden->primero);
    //system("dot -Tpng LSPreorden.txt -o LSPreorden.png");
    //system("xdg-open LSPreorden.png");
    //POOABB->POOLSInorden->GraficarLSimple2(POOABB->POOLSInorden->primero);
    //system("dot -Tpng LSInorden.txt -o LSInorden.png");
    //system("xdg-open LSInorden.png");
    //POOABB->POOLSPostorden->GraficarLSimple3(POOABB->POOLSPostorden->primero);
    //system("dot -Tpng LSPostorden.txt -o LSPostorden.png");
    //system("xdg-open LSPostorden.png");






    /* LISTA DOBLEMENTE ENLAZADA CIRCULAR------------------------------------

    //DICCIONARIOLDEC *POODICLDEC = new DICCIONARIOLDEC();
    //DICNODOLDEC *Dato1 = new DICNODOLDEC("uno");
    //DICNODOLDEC *Dato2 = new DICNODOLDEC("dos");
    //DICNODOLDEC *Dato3 = new DICNODOLDEC("tres");
    //DICNODOLDEC *Dato4 = new DICNODOLDEC("cuatro");
    //DICNODOLDEC *Dato5 = new DICNODOLDEC("cuatro");
    //DICNODOLDEC *Dato6 = new DICNODOLDEC("cuatro");
    //DICNODOLDEC *Dato7 = new DICNODOLDEC("cuatro");

    //POODICLDEC->insertarenldec(Dato1);
    //POODICLDEC->insertarenldec(Dato2);
    //POODICLDEC->insertarenldec(Dato3);
    //POODICLDEC->insertarenldec(Dato4);
    //POODICLDEC->insertarenldec(Dato5);
    //POODICLDEC->insertarenldec(Dato6);
    //POODICLDEC->insertarenldec(Dato7);
    //POODICLDEC->DICmostrarLDEC(POODICLDEC->primero);
    //POODICLDEC->UPDICmostrarLDEC(POODICLDEC->ultimo);
    //POODICLDEC->GraficarLDEC(POODICLDEC->primero);
    //system("dot -Tpng LDECircular.txt -o LDECircular.png");
    //system("xdg-open LDECircular.png");

    //LISTA DOBLEMENTE ENLAZADA CIRCULAR------------------------------------
    */


    /* LISTA SIMPLE--------------------------------------------------------
    ListaSimple *POOLSPreorden = new ListaSimple();

    NodoLS *lsD1 = new NodoLS("Heidy");
    NodoLS *lsD2 = new NodoLS("Carlos");
    NodoLS *lsD3 = new NodoLS("Antonio");
    POOLSPreorden->InsertarLS(lsD1);
    POOLSPreorden->InsertarLS(lsD2);
    POOLSPreorden->InsertarLS(lsD3);

    POOLSPreorden->GraficarLSimple(POOLSPreorden->primero);
    system("dot -Tpng LSPreorden.txt -o LSPreorden.png");
    system("xdg-open LSPreorden.png");

    ListaSimple *POOLSInorden = new ListaSimple();

    NodoLS *lsDD1 = new NodoLS("Uno");
    NodoLS *lsDD2 = new NodoLS("Dos");
    NodoLS *lsDD3 = new NodoLS("Tres");
    POOLSInorden->InsertarLS(lsDD1);
    POOLSInorden->InsertarLS(lsDD2);
    POOLSInorden->InsertarLS(lsDD3);

    POOLSInorden->GraficarLSimple2(POOLSInorden->primero);
    system("dot -Tpng LSInorden.txt -o LSInorden.png");
    system("xdg-open LSInorden.png");


    ListaSimple *POOLSPostorden = new ListaSimple();

    NodoLS *lsDDD1 = new NodoLS("ocho");
    NodoLS *lsDDD2 = new NodoLS("nueve");
    NodoLS *lsDDD3 = new NodoLS("diez");
    POOLSPostorden->InsertarLS(lsDDD1);
    POOLSPostorden->InsertarLS(lsDDD2);
    POOLSPostorden->InsertarLS(lsDDD3);

    POOLSPostorden->GraficarLSimple3(POOLSPostorden->primero);
    system("dot -Tpng LSPostorden.txt -o LSPostorden.png");
    system("xdg-open LSPostorden.png");
    //LISTA SIMPLE--------------------------------------------------------
   */


    /*
    //-------------------------------------------fichas de juego logica de juego
    FICHASCOLA *POOCOLA = new FICHASCOLA();
    //FINODOCOLA *DATO1 = new FINODOCOLA(2,"A",30);
    //POOCOLA->InsertarCola(DATO1);
    //POOCOLA->MostrarCola(POOCOLA->primerocola);



    for(int i=0;i<20;i++)
    {
    //printf("%c\n",'a' + rand()%10);

    //variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;

    //cout<<n<<endl;
    //cout<<char(n)<<endl;
    //hola= char(n);



    //if(letra[0]==char(n))
    //{
       // cout<<"letra A SALIO"<<endl;
    //}

    }

    string letra= "ABCDEFGHIJKLMN OPQRSTUVWXYZ";


     srand(time(NULL));

    for(int i=0;i<9000;i++)
    {

        int n = 65 + rand()%26;

        if(letra[0]== char(n))
        {
         //cout<<"salio la A"<<endl;
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"A")<12)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(1,"A",12);
         POOCOLA->InsertarCola(DATO1);
        }

        }


        if(letra[1]== char(n))
        {
        if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"B")<2)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(3,"B",2);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[2]== char(n))
        {
        if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"C")<4)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(3,"C",4);
         POOCOLA->InsertarCola(DATO1);
        }
        }


        if(letra[3]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"D")<5)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(2,"D",5);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[4]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"E")<12)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(1,"E",12);
         POOCOLA->InsertarCola(DATO1);
        }
        }


        if(letra[5]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"F")<1)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(4,"F",1);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[6]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"G")<2)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(2,"G",2);
         POOCOLA->InsertarCola(DATO1);
        }
        }


        if(letra[7]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"H")<2)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(4,"H",2);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[8]== char(n))
        {
          if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"I")<6)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(1,"I",6);
         POOCOLA->InsertarCola(DATO1);
        }
        }


        if(letra[9]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"J")<1)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(8,"J",1);
         POOCOLA->InsertarCola(DATO1);
        }
        }




        if(letra[11]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"L")<4)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(1,"L",4);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[12]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"M")<2)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(3,"M",2);
         POOCOLA->InsertarCola(DATO1);
        }
        }


        if(letra[13]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"N")<5)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(1,"N",5);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[23]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"Ñ")<1)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(8,"Ñ",1);
         POOCOLA->InsertarCola(DATO1);
        }
        }


        if(letra[15]== char(n))//se coloca k por que el sistema no brinda la letra O.
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"O")<9)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(1,"O",9);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[16]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"P")<2)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(3,"P",2);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[17]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"Q")<1)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(5,"Q",1);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[18]== char(n))
        {
        if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"R")<5)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(1,"R",5);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[19]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"S")<6)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(1,"S",6);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[20]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"T")<4)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(1,"T",4);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[21]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"U")<5)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(1,"U",5);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[22]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"V")<1)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(4,"V",1);
         POOCOLA->InsertarCola(DATO1);
        }
        }



        if(letra[24]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"X")<1)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(8,"X",1);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[25]== char(n))
        {
        if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"Y")<1)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(4,"Y",1);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[26]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"Z")<1)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(10,"Z",1);
         POOCOLA->InsertarCola(DATO1);
        }
        }




    }



    cout<<"Letra A: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"A"))<<endl;
    cout<<"Letra B: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"B"))<<endl;
    cout<<"Letra C: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"C"))<<endl;
    cout<<"Letra D: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"D"))<<endl;
    cout<<"Letra E: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"E"))<<endl;
    cout<<"Letra F: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"F"))<<endl;
    cout<<"Letra G: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"G"))<<endl;
    cout<<"Letra H: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"H"))<<endl;
    cout<<"Letra I: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"I"))<<endl;
    cout<<"Letra J: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"J"))<<endl;
    cout<<"Letra K: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"K"))<<endl;
    cout<<"Letra L: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"L"))<<endl;
    cout<<"Letra M: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"M"))<<endl;
    cout<<"Letra N: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"N"))<<endl;

    cout<<"Letra Ñ: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"Ñ"))<<endl;

    cout<<"Letra O: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"O"))<<endl;

    cout<<"Letra P: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"P"))<<endl;
    cout<<"Letra Q: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"Q"))<<endl;
    cout<<"Letra R: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"R"))<<endl;
    cout<<"Letra S: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"S"))<<endl;
    cout<<"Letra T: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"T"))<<endl;
    cout<<"Letra U: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"U"))<<endl;
    cout<<"Letra V: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"V"))<<endl;
    cout<<"Letra W: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"W"))<<endl;
    cout<<"Letra X: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"X"))<<endl;
    cout<<"Letra Y: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"Y"))<<endl;
    cout<<"Letra Z: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"Z"))<<endl;




    POOCOLA->GraficarCola(POOCOLA->primerocola);
    system("dot -Tpng FichasCola.txt -o FichasCola.png");
    system("xdg-open FichasCola.png");


        ListaSimple *PooLsOrdenada = new ListaSimple();
        NodoLS *Dato1 = new NodoLS(8);
        NodoLS *Dato2 = new NodoLS(3);
        NodoLS *Dato3 = new NodoLS(5);
        NodoLS *Dato4 = new NodoLS(7);
        NodoLS *Dato5 = new NodoLS(766);
        NodoLS *Dato6 = new NodoLS(4);
        NodoLS *Dato7 = new NodoLS(0);
        NodoLS *Dato8 = new NodoLS(27);
        NodoLS *Dato9 = new NodoLS(43);
        NodoLS *Dato10 = new NodoLS(3);
        PooLsOrdenada->InsertarLSOrdenado(Dato1);
        PooLsOrdenada->InsertarLSOrdenado(Dato2);
        PooLsOrdenada->InsertarLSOrdenado(Dato3);
        PooLsOrdenada->InsertarLSOrdenado(Dato4);
        PooLsOrdenada->InsertarLSOrdenado(Dato5);
        PooLsOrdenada->InsertarLSOrdenado(Dato6);
        PooLsOrdenada->InsertarLSOrdenado(Dato7);
        PooLsOrdenada->InsertarLSOrdenado(Dato8);
        PooLsOrdenada->InsertarLSOrdenado(Dato9);
        PooLsOrdenada->InsertarLSOrdenado(Dato10);


        PooLsOrdenada->MostrarLS_PrimeroUltimoOrdenada(PooLsOrdenada->primero);




 */

         //matrizortogonal *MatrizGeneral = new matrizortogonal();
        //MatrizGeneral->InsertarEnMatrizOrtogonal(0,0,"A",2);
        //MatrizGeneral->InsertarEnMatrizOrtogonal(1,0,"D",3);
        //MatrizGeneral->InsertarEnMatrizOrtogonal(2,0,"G",4);
        //MatrizGeneral->InsertarEnMatrizOrtogonal(0,1,"B",3);
        //MatrizGeneral->InsertarEnMatrizOrtogonal(1,1,"E",2);
        //MatrizGeneral->InsertarEnMatrizOrtogonal(2,1,"H",4);
        //MatrizGeneral->InsertarEnMatrizOrtogonal(0,2,"C",5);
        //MatrizGeneral->InsertarEnMatrizOrtogonal(1,2,"F",6);
        //MatrizGeneral->InsertarEnMatrizOrtogonal(2,2,"I",7);
        //MatrizGeneral->InsertarEnMatrizOrtogonal(4,4,"J",8);
        //MatrizGeneral->InsertarEnMatrizOrtogonal(2,4,"K",9);
        //MatrizGeneral->InsertarEnMatrizOrtogonal(100,100,"M",10);
        //MatrizGeneral->InsertarEnMatrizOrtogonal(200,200,"dos",110);


        //MatrizGeneral->RecorrerFilas();
        //string ruta = "ArchivoMatriz.txt";
        //MatrizGeneral->GraficarMatrizGeneral(ruta);
        //system("dot -Tpng ArchivoMatriz.txt -o ArchivoMatriz.png");
        //system("xdg-open ArchivoMatriz.png");

        //inicio matriz donde se ingresaran las letras de cada jugador.
        matrizortogonal *MatrizGeneral;// = new matrizortogonal();
       // matrizortogonal *MatrizJugador2;
        // inicio arbol binario donde se almacena todo los usuarios
        ABB *POOABB = new ABB();
        // Cola donde se guardan todas las fichas disponibles del juego.
        FICHASCOLA *POOCOLA;
        // = new FICHASCOLA();
        //Lista doblemente enlazada circular donde se guardan las palabras del diccionario
        DICCIONARIOLDEC *POODICLDEC ;//= new DICCIONARIOLDEC();
        //Lista doblemente enlazada donde se guarda las 7 fichas del primer jugador.
        string jugador1nombre;
        LDEJugador *POOLDEJugador1;
        //LDEJugador *POOLDEJugador1 = new LDEJugador();
        /*
        jugador1nombre="Juacarlos";
        NODOLDEJUGA *j1 = new NODOLDEJUGA("A",1);
        NODOLDEJUGA *j2 = new NODOLDEJUGA("B",2);
        NODOLDEJUGA *j3 = new NODOLDEJUGA("C",3);
        NODOLDEJUGA *j4 = new NODOLDEJUGA("D",4);
        NODOLDEJUGA *j5 = new NODOLDEJUGA("E",5);

        POOLDEJugador1->InsertarLDE(j1);
        POOLDEJugador1->InsertarLDE(j2);
        POOLDEJugador1->InsertarLDE(j3);
        POOLDEJugador1->InsertarLDE(j4);
        POOLDEJugador1->InsertarLDE(j5);
        POOLDEJugador1->PimUltiMostrarLDE(POOLDEJugador1->primero);
        POOLDEJugador1->UltiPimMostrarLDE(POOLDEJugador1->ultimo);
        POOLDEJugador1->GraficarListaDoble(POOLDEJugador1->primero,jugador1nombre);
        system("dot -Tpng LDEJFisJug1.txt -o LDEJFisJug1.png");
        system("xdg-open LDEJFisJug1.png");
        */

        //Lista doblemente enlazada donde se guarda las 7 fichas del segundo jugador.
        string jugador2nombre;
        LDEJugador *POOLDEJugador2;
        //LDEJugador *POOLDEJugador2 = new LDEJugador();
        //LDEJugador *POOLDEJugador1 = new LDEJugador();

        /*
        jugador2nombre= "Pedro";
        NODOLDEJUGA *jj1 = new NODOLDEJUGA("f",6);
        NODOLDEJUGA *jj2 = new NODOLDEJUGA("g",7);
        NODOLDEJUGA *jj3 = new NODOLDEJUGA("h",8);
        NODOLDEJUGA *jj4 = new NODOLDEJUGA("i",9);
        NODOLDEJUGA *jj5 = new NODOLDEJUGA("j",10);

        POOLDEJugador2->InsertarLDE(jj1);
        POOLDEJugador2->InsertarLDE(jj2);
        POOLDEJugador2->InsertarLDE(jj3);
        POOLDEJugador2->InsertarLDE(jj4);
        POOLDEJugador2->InsertarLDE(jj5);
        POOLDEJugador2->PimUltiMostrarLDE(POOLDEJugador2->primero);
        POOLDEJugador2->UltiPimMostrarLDE(POOLDEJugador2->ultimo);
        POOLDEJugador2->GraficarLDE2(POOLDEJugador2->primero,jugador2nombre);
        system("dot -Tpng LDEJFisJug2.txt -o LDEJFisJug2.png");
        system("xdg-open LDEJFisJug2.png");
        */

        //POOABB->InsertarNodoABBString(&POOABB->raiz,"Heidy");
        //POOABB->InsertarNodoABBString(&POOABB->raiz,"Carlos");
        //POOABB->InsertarNodoABBString(&POOABB->raiz,"Antonio");
        //POOABB->InsertarNodoABBString(&POOABB->raiz,"Eduardo");
        //POOABB->InsertarNodoABBString(&POOABB->raiz,"Rodrigo");
       // POOABB->ObtenerNodoABB(&POOABB->raiz,"Heidy");
        //NODOABB *CabezaFila = POOABB->ObtenerNodoABB(POOABB->raiz,"Heidy");
        //NODOABB *CabezaFila1 = POOABB->ObtenerNodoABB(POOABB->raiz,"Carlos");

        //string hola = POOABB->ObtenerNodoABB(&POOABB->raiz,"Antonio");
        //string hola1 = POOABB->ObtenerNodoABB(&POOABB->raiz,"Heidy");
        //string hola2 = POOABB->ObtenerNodoABB(&POOABB->raiz,"Eduardo");
        //string hola3 = POOABB->ObtenerNodoABB(&POOABB->raiz,"Carlos");

        //cout<<hola<<endl;

         //NODOABB *CabezaFila3 = POOABB->ObtenerNodoABB(POOABB->raiz,"Eduardo");


/*
          if(POOABB->raiz!=NULL)
            {
            NODOABB *Usuer1 = POOABB->ObtenerNodoABB("Heidy");
            if(Usuer1!=NULL)
            {
                cout<<Usuer1->jugador<<endl;
                Usuer1->POOLSOrdenada->MostrarLS_PrimeroUltimoOrdenada(Usuer1->POOLSOrdenada->primero);

                NodoLS *dato = new NodoLS(3);
                NodoLS *dato1 = new NodoLS(4);
                NodoLS *dato2 = new NodoLS(0);
                Usuer1->POOLSOrdenada->InsertarLSOrdenado(dato);
                Usuer1->POOLSOrdenada->InsertarLSOrdenado(dato1);
                Usuer1->POOLSOrdenada->InsertarLSOrdenado(dato2);
                Usuer1->POOLSOrdenada->MostrarLS_PrimeroUltimoOrdenada(Usuer1->POOLSOrdenada->primero);

            }
            NODOABB *Usuer2 = POOABB->ObtenerNodoABB("Antonio");

             if(Usuer2!=NULL)
            {
                cout<<Usuer2->jugador<<endl;
                Usuer2->POOLSOrdenada->MostrarLS_PrimeroUltimoOrdenada(Usuer2->POOLSOrdenada->primero);

                NodoLS *dato3 = new NodoLS(70);
                NodoLS *dato4 = new NodoLS(90);
                NodoLS *dato5 = new NodoLS(200);
                Usuer2->POOLSOrdenada->InsertarLSOrdenado(dato3);
                Usuer2->POOLSOrdenada->InsertarLSOrdenado(dato4);
                Usuer2->POOLSOrdenada->InsertarLSOrdenado(dato5);
                Usuer2->POOLSOrdenada->MostrarLS_PrimeroUltimoOrdenada(Usuer2->POOLSOrdenada->primero);

            }

            NODOABB *Usuario3 = POOABB->ObtenerNodoABB("Carlos");

             if(Usuario3!=NULL)
            {
                cout<<Usuario3->jugador<<endl;
                Usuario3->POOLSOrdenada->MostrarLS_PrimeroUltimoOrdenada(Usuario3->POOLSOrdenada->primero);

                NodoLS *dato6 = new NodoLS(3);
                NodoLS *dato7 = new NodoLS(60);
                NodoLS *dato8 = new NodoLS(70);
                NodoLS *dato9 = new NodoLS(100);
                Usuario3->POOLSOrdenada->InsertarLSOrdenado(dato6);
                Usuario3->POOLSOrdenada->InsertarLSOrdenado(dato7);
                Usuario3->POOLSOrdenada->InsertarLSOrdenado(dato8);
                Usuario3->POOLSOrdenada->InsertarLSOrdenado(dato9);

                Usuario3->POOLSOrdenada->MostrarLS_PrimeroUltimoOrdenada(Usuario3->POOLSOrdenada->primero);

            }

              NODOABB *Usuario4 = POOABB->ObtenerNodoABB("Eduardo");

             if(Usuario4!=NULL)
            {
                cout<<Usuario4->jugador<<endl;
                Usuario4->POOLSOrdenada->MostrarLS_PrimeroUltimoOrdenada(Usuario4->POOLSOrdenada->primero);

                NodoLS *dato10 = new NodoLS(3);
                NodoLS *dato11 = new NodoLS(4);
                NodoLS *dato12 = new NodoLS(2);
                NodoLS *dato13 = new NodoLS(1);
                Usuario4->POOLSOrdenada->InsertarLSOrdenado(dato10);
                Usuario4->POOLSOrdenada->InsertarLSOrdenado(dato11);
                Usuario4->POOLSOrdenada->InsertarLSOrdenado(dato12);
                Usuario4->POOLSOrdenada->InsertarLSOrdenado(dato13);

                Usuario4->POOLSOrdenada->MostrarLS_PrimeroUltimoOrdenada(Usuario4->POOLSOrdenada->primero);

            }
              NODOABB *Usuario5 = POOABB->ObtenerNodoABB("Rodrigo");

             if(Usuario5!=NULL)
            {
                cout<<Usuario5->jugador<<endl;
                Usuario5->POOLSOrdenada->MostrarLS_PrimeroUltimoOrdenada(Usuario5->POOLSOrdenada->primero);

                NodoLS *dato14 = new NodoLS(5);
                NodoLS *dato15 = new NodoLS(6);
                NodoLS *dato16 = new NodoLS(8);
                Usuario5->POOLSOrdenada->InsertarLSOrdenado(dato14);
                Usuario5->POOLSOrdenada->InsertarLSOrdenado(dato15);
                Usuario5->POOLSOrdenada->InsertarLSOrdenado(dato16);


                Usuario5->POOLSOrdenada->MostrarLS_PrimeroUltimoOrdenada(Usuario5->POOLSOrdenada->primero);

            }


            //Usuer1->POOLSOrdenada->MostrarLS_PrimeroUltimoOrdenada(Usuer1->POOLSOrdenada->primero);
            //Usuer1->POOLSOrdenada->GraficarPuntajeJugador(Usuer1->POOLSOrdenada->primero,Usuer1->jugador);
            //system("dot -Tpng PuntajeJugador.txt -o PuntajeJugador.png");
            //system("xdg-open PuntajeJugador.png");
            }else
            {
                cout<<"Arbol Vacio"<<endl;
            }


*/
         //




        //cout<<CabezaFila->jugador<<endl;
        //cout<<CabezaFila1->jugador<<endl;
        //cout<<x->jugador<<endl;
        //cout<<CabezaFila3->jugador<<endl;

        //system("display PuntajeJugador.png &");

        int OpcionMenuPrincipal=0;
        int OpcionMenuJuego=0;
        int OpcionMenuReportes=0;
        int OpcionDeTurno;
        int CordenadayOx;
        char *NomJugador;
        int CordenadaX;
        int CordenadaY;
        string Letrax;
        string letra;

        int PuntaJugador1;
        int PuntaJugador2;
        int opcionxjugador=0;

        //DICNODOLDEC *Dato1 = new DICNODOLDEC("Libro");
        //DICNODOLDEC *Dato2 = new DICNODOLDEC("Cuaderno");
        //POODICLDEC->insertarenldec(Dato1);
        //POODICLDEC->insertarenldec(Dato2);

        int DimensionTablero=0;


        do{
        printf("---------------PROYECTO UNO Estructuras De Datos.-----------------------\n");
        printf("JUEGO SCRABBLE++.\n");
        printf("1. Lectura de archivo.\n");
        printf("2. Juego.\n");
        printf("3. Reportes.\n");
        printf("4. Salir.\n");
        printf("------------------------------------------------------------------------\n");
        printf("Ingreso Opciones a trabajar.\n");
        scanf("%d",&OpcionMenuPrincipal);

        switch (OpcionMenuPrincipal)
        {
        case 1:

            if(1==1)
            {
            POODICLDEC = new DICCIONARIOLDEC();
                //--INICIO LECTURA DE ARCHIVO JASON ---------------------------
            NomJugador= (char*)malloc(200);
            printf("-----------Inicio---lectura del archivo.----------.\n");
            printf("Ingrese nombre del archivo con su extension.\n");
            printf("Ejemplo:  archivoutil.json .\n");
            scanf("%s",NomJugador);
            std::ifstream is(NomJugador);
            json total = json::parse(is);
            DimensionTablero = total["dimension"].as<int>();
            std::cout << "Dimension del tablero: "+std::to_string(DimensionTablero) << std::endl;

            json& Casillas = total["casillas"];

            json& dobles = Casillas["dobles"];

            for (std::size_t i = 0; i < dobles.size(); ++i)
                    {
            json& doblesbloque = dobles[i];
            std::string Corx = doblesbloque["x"].as<std::string>();
            std::string Cory = doblesbloque["y"].as<std::string>();
            std::cout << "Coordenada Doble : "+Corx << ", " << Cory << std::endl;
                    }

            json& triples = Casillas["triples"];

            for (std::size_t i = 0; i < triples.size(); ++i)
                    {
            json& triplesbloque = triples[i];
            std::string CCorx = triplesbloque["x"].as<std::string>();
            std::string CCory = triplesbloque["y"].as<std::string>();
            std::cout << "Coordenada Triple : "+ CCorx << ", " << CCory << std::endl;
                    }

            json& Diccionario = total["diccionario"];
            for (std::size_t i = 0; i < Diccionario.size(); ++i)
                    {
            json& palabrabloque = Diccionario[i];
            std::string palabraX = palabrabloque["palabra"].as<std::string>();
            std::cout << palabraX <<std::endl;

                DICNODOLDEC *Pa = new DICNODOLDEC(palabraX);
                POODICLDEC->insertarenldec(Pa);
                    }

        //--FIN LECTURA DE ARCHIVO JASON ---------------------------
        printf("-----------Fin---lectura del archivo.----------.\n");

            }
            break;
        case 2:
            do{
            printf("---------------JUEGO.-----------------------\n");
            printf("JUEGO SCRABBLE++.\n");
            printf("1. Agregar jugador.\n");
            printf("2. Iniciar Juego.\n");
            printf("3. -----.\n");
            printf("4. Salir.\n");
            printf("----------------------------------------------\n");
            printf("Ingreso Opciones a trabajar.\n");
            scanf("%d",&OpcionMenuJuego);

            switch(OpcionMenuJuego)
            {
                case 1:

                    NomJugador= (char*)malloc(200);
                    printf("-----------Inicio---Ingresando un nuevo jugador.----------.\n");
                    printf("Ingrese jugador.\n");
                    scanf("%s",NomJugador);

                    if(1==1)
                        {

                    if(POOABB->raiz!=NULL)
                    {
                    NODOABB *NODOJUGADOR =POOABB->ObtenerNodoABB(NomJugador);

                    if(NODOJUGADOR!=NULL)
                    {
                     cout <<"Jugador ingresado ya existe en el arbol"<< endl;
                     cout <<"ingrese otro nommbre de jugador por favor"<< endl;
                    }
                    else
                    {
                    POOABB->InsertarNodoABBString(&POOABB->raiz,NomJugador);
                    cout <<"Jugador ingresado con exito."<< endl ;
                    }

                    }
                    else
                    {
                        cout <<"Primer jugador ingresado con exito."<< endl ;
                     POOABB->InsertarNodoABBString(&POOABB->raiz,NomJugador);
                    }
                    //if(NODOJUGADOR!=NULL)
                    //{
                     //cout <<"Jugador ingresado ya existe en el arbol"<< endl;
                     //cout <<"ingrese otro nommbre de jugador por favor"<< endl;
                    //}
                    //else
                    //{

                    //}
                    }

                    printf("-----------Fin----Ingreso de nuevo jugador-------------------.\n");

                    break;
                case 2:
                if(POODICLDEC!=NULL){
                if(POOABB->raiz!=NULL)
                    {
                   POOCOLA = new FICHASCOLA();
                   POOLDEJugador1 = new LDEJugador();
                   POOLDEJugador2 = new LDEJugador();
                   MatrizGeneral = new matrizortogonal();
                  // MatrizJugador2 = new matrizortogonal();

                    PuntaJugador1=0;
                    PuntaJugador2=0;

                    letra= "ABCDEFGHIJKLMN OPQRSTUVWXYZ";

                    srand(time(NULL));

                    for(int i=0;i<9000;i++)
                        {

        int n = 65 + rand()%26;

        if(letra[0]== char(n))
        {
         //cout<<"salio la A"<<endl;
        if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"A")<12)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(1,"A",12);
         POOCOLA->InsertarCola(DATO1);
        }

        }


        if(letra[1]== char(n))
        {
        if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"B")<2)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(3,"B",2);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[2]== char(n))
        {
        if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"C")<4)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(3,"C",4);
         POOCOLA->InsertarCola(DATO1);
        }
        }


        if(letra[3]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"D")<5)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(2,"D",5);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[4]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"E")<12)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(1,"E",12);
         POOCOLA->InsertarCola(DATO1);
        }
        }


        if(letra[5]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"F")<1)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(4,"F",1);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[6]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"G")<2)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(2,"G",2);
         POOCOLA->InsertarCola(DATO1);
        }
        }


        if(letra[7]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"H")<2)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(4,"H",2);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[8]== char(n))
        {
          if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"I")<6)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(1,"I",6);
         POOCOLA->InsertarCola(DATO1);
        }
        }


        if(letra[9]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"J")<1)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(8,"J",1);
         POOCOLA->InsertarCola(DATO1);
        }
        }




        if(letra[11]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"L")<4)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(1,"L",4);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[12]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"M")<2)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(3,"M",2);
         POOCOLA->InsertarCola(DATO1);
        }
        }


        if(letra[13]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"N")<5)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(1,"N",5);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[23]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"Ñ")<1)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(8,"Ñ",1);
         POOCOLA->InsertarCola(DATO1);
        }
        }


        if(letra[15]== char(n))//se coloca k por que el sistema no brinda la letra O.
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"O")<9)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(1,"O",9);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[16]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"P")<2)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(3,"P",2);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[17]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"Q")<1)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(5,"Q",1);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[18]== char(n))
        {
        if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"R")<5)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(1,"R",5);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[19]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"S")<6)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(1,"S",6);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[20]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"T")<4)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(1,"T",4);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[21]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"U")<5)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(1,"U",5);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[22]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"V")<1)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(4,"V",1);
         POOCOLA->InsertarCola(DATO1);
        }
        }



        if(letra[24]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"X")<1)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(8,"X",1);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[25]== char(n))
        {
        if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"Y")<1)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(4,"Y",1);
         POOCOLA->InsertarCola(DATO1);
        }
        }

        if(letra[26]== char(n))
        {
         if(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"Z")<1)
        {
         FINODOCOLA *DATO1 = new FINODOCOLA(10,"Z",1);
         POOCOLA->InsertarCola(DATO1);
        }
        }

    }

                    NomJugador = (char*)malloc(200);

                    printf("---------------INICIANDO EL JUEGO---------------------.\n");
                    printf("---Usuarios o jugadores disponibles---------------------.\n");
                    POOABB->RecorrerABBjugador(POOABB->raiz);
                    printf("-----------Elija el primer jugador:.-------------.\n");
                    printf("Ingrese jugador.\n");
                    scanf("%s",NomJugador);
                    jugador1nombre = NomJugador;
                    printf("-----------Elija el segundo jugador:.-------------.\n");
                    printf("Ingrese jugador.\n");
                    scanf("%s",NomJugador);
                    jugador2nombre = NomJugador;
                    cout<< "imprimiendo jugador 1 "+jugador1nombre<<endl;
                    cout<< "imprimiendo jugador 2 "+jugador2nombre<<endl;

                    POOCOLA->GraficarCola(POOCOLA->primerocola);
                    system("dot -Tpng FichasCola.txt -o FichasCola.png");
                    system("xdg-open FichasCola.png");

                    for(int i =0; i<7; i++)
                    {
                    NODOLDEJUGA *j = new NODOLDEJUGA(POOCOLA->primerocola->letra,POOCOLA->primerocola->puntaje);
                    POOLDEJugador1->InsertarLDE(j);
                    POOCOLA->Desencolar();
                    }
                    for(int i =0; i<7; i++)
                    {
                    NODOLDEJUGA *jj = new NODOLDEJUGA(POOCOLA->primerocola->letra,POOCOLA->primerocola->puntaje);
                    POOLDEJugador2->InsertarLDE(jj);
                    POOCOLA->Desencolar();
                    }

                    POOLDEJugador1->GraficarListaDoble(POOLDEJugador1->primero,jugador1nombre);
                    system("dot -Tpng LDEJFisJug1.txt -o LDEJFisJug1.png");
                    system("xdg-open LDEJFisJug1.png");

                    POOLDEJugador2->GraficarLDE2(POOLDEJugador2->primero,jugador2nombre);
                    system("dot -Tpng LDEJFisJug2.txt -o LDEJFisJug2.png");
                    system("xdg-open LDEJFisJug2.png");

                    cout<<"------------INICIANDO JUEGO TOMA DE JUGADOR AL AZAR -------------"<<endl;

                    OpcionDeTurno = 1+rand()%2;

                    do {

                        switch(OpcionDeTurno)
                        {
                        case 1://jugador uno


                            do{
                            cout<<"Jugador 1: "+jugador1nombre+"\n"<<endl;
                            cout<<"FINALIZAR JUEGO,Si desea salir del juego presione 1.\n"<<endl;
                            cout<<"Ingresar coordenada presione 2.\n"<<endl;
                            cout<<"CAMBIAR FICHAS (PASAR TURNO AUTOMATICAMENTE) 3.\n"<<endl;
                            cout<<"VALIDAR Y FINALIZAR TURNO PRESIONE 4.\n"<<endl;
                            scanf("%d",&opcionxjugador);
                            switch(opcionxjugador)
                                {
                                case 1:
                                    opcionxjugador=4;
                                    OpcionDeTurno=4;
                                    break;
                                case 2:
                                    NomJugador = (char*)malloc(200);
                                    printf("--------Colocando Ficha-----------------.\n");
                                    printf("Ingrese Cordenada X(Fila).\n");
                                    scanf("%d",&CordenadayOx);
                                    CordenadaX = CordenadayOx;
                                    printf("Ingrese Cordenada y(Columna).\n");
                                    scanf("%d",&CordenadayOx);
                                    CordenadaY = CordenadayOx;
                                    cout<<"---Fichas disponibles para jugador 1--------"<<endl;
                                    POOLDEJugador1->PimUltiMostrarLDE(POOLDEJugador1->primero);
                                    cout<<"---FIN FICHAS disponibles para jugador 1--------"<<endl;
                                    printf("Ingrese letra.\n");
                                    scanf("%s",NomJugador);
                                    Letrax=NomJugador;

                                    if(1==1)
                                    {
                                    NODOLDEJUGA *NODOLETRA = POOLDEJugador1->obtenerLetraLDE(Letrax);

                                    if(NODOLETRA != NULL)
                                    {
                                    cout <<"Letra SI esta en la lista doblemente en lazada del jugador 1."<<endl;
                                     MatrizGeneral->InsertarEnMatrizOrtogonal(CordenadaX,CordenadaY,NODOLETRA->letra,NODOLETRA->puntajeletra);
                                     POOLDEJugador1->EliminarLDEO(Letrax);
                                    }
                                    else
                                    {
                                        cout <<"Letra NO esta en la lista doblemente en lazada del jugador 1."<<endl;
                                    }
                                    }


                                    MatrizGeneral->GraficarMatrizGeneral("ArchivoMatriz.txt");
                                    system("dot -Tpng ArchivoMatriz.txt -o ArchivoMatriz.png");
                                    system("xdg-open ArchivoMatriz.png");
                                    //POOLDEJugador1->GraficarListaDoble(POOLDEJugador1->primero,jugador1nombre);
                                    //system("dot -Tpng LDEJFisJug1.txt -o LDEJFisJug1.png");
                                    //system("xdg-open LDEJFisJug1.png");

                                    break;
                                case 3:
                                cout <<"------------------Ingresando nuevas fichas al jugador 1."<<endl;

                                    POOLDEJugador1 = new LDEJugador();

                                     if(POOCOLA->primerocola!=NULL)
                                        {
                                      for(int i =0; i<7; i++)
                                        {
                                        NODOLDEJUGA *j = new NODOLDEJUGA(POOCOLA->primerocola->letra,POOCOLA->primerocola->puntaje);
                                        POOLDEJugador1->InsertarLDE(j);
                                        POOCOLA->Desencolar();
                                        }
                                    POOLDEJugador1->GraficarListaDoble(POOLDEJugador1->primero,jugador1nombre);
                                    system("dot -Tpng LDEJFisJug1.txt -o LDEJFisJug1.png");
                                    system("xdg-open LDEJFisJug1.png");


                                    }else
                                    {
                                        cout<<"Cola de fichas vacia"<<endl;
                                    }


                                    opcionxjugador=4;
                                    OpcionDeTurno=2;

                                    cout <<"--------------FIN----Ingresando nuevas fichas al jugador 1."<<endl;
                                    break;
                                case 4:
                                    cout<<"Turno Finalizado"<<endl;
                                    cout<<"----------------validando palabra -------------------"<<endl;

                                    if(1==1)
                                    {
                                    //verificando palabra por fila
                                    string palabrafila = MatrizGeneral->RecorrerFilasPa();
                                    cout <<"palabra capturada fila "+palabrafila<<endl;

                                    DICNODOLDEC *DATO =POODICLDEC->obtenerPalabra(palabrafila);
                                    if(DATO!=NULL)
                                    {
                                        cout<<"Palabra si esta en el diccionario: "+DATO->palabra<<endl;
                                        cout<<"Palabra se encuentra en forma HORIZONTAL "+DATO->palabra<<endl;
                                        PuntaJugador1 = MatrizGeneral->RecorrerFilasLetraPuntaje();
                                        cout<<"Puntaje jugador 1: "+ std::to_string(PuntaJugador1)<<endl;

                                    }else
                                    {
                                    cout<<"Palabra  "<<palabrafila<<" no esta formada horizontalmente"<<endl;
                                       //verificando palabra por columna
                                    string palabracol = MatrizGeneral->RecorrerColumnasPa();
                                    cout <<"palabra capturada columna "+palabracol<<endl;
                                    DICNODOLDEC *DATOCOL =POODICLDEC->obtenerPalabra(palabracol);
                                    if(DATOCOL!=NULL)
                                    {
                                        cout<<"Palabra si esta en el diccionario: "+DATOCOL->palabra<<endl;
                                        cout<<"Palabra se encuentra en forma VERTICAL "+DATOCOL->palabra<<endl;

                                    }else
                                    {
                                        cout<<"Palabra  "<<palabracol<<" no esta en el dirccionario. COLUMNA"<<endl;
                                    }

                                    }

                                    }

                                    //PuntaJugador1++;
                                    OpcionDeTurno=2;
                                    break;
                                default:
                                    cout<<"La opcion que ingreso es incorrecta.\n"<<endl;
                                    break;
                                }
                            }
                            while(opcionxjugador!=4);

                        break;
                        case 2:// jugador dos

                            do{
                             cout<<"Jugador 2 :"+jugador2nombre+".\n"<<endl;
                            cout<<"FINALIZAR JUEGO,Si desea salir del juego presione 1.\n"<<endl;
                            cout<<"Ingresar coordenada presione 2.\n"<<endl;
                            cout<<"CAMBIAR FICHAS (PASAR TURNO AUTOMATICAMENTE) 3.\n"<<endl;
                            cout<<"VALIDAR Y FINALIZAR TURNO PRESIONE 4.\n"<<endl;
                            scanf("%d",&opcionxjugador);
                            switch(opcionxjugador)
                                {
                                case 1:
                                    opcionxjugador=4;
                                    OpcionDeTurno=4;
                                    break;
                                case 2:
                                    NomJugador = (char*)malloc(200);
                                    printf("--------Colocando Ficha-----------------.\n");
                                    printf("Ingrese Cordenada X(Fila).\n");
                                    scanf("%d",&CordenadayOx);
                                    CordenadaX = CordenadayOx;
                                    printf("Ingrese Cordenada y(Columna).\n");
                                    scanf("%d",&CordenadayOx);
                                    CordenadaY = CordenadayOx;
                                    cout<<"---Fichas disponibles para jugador 2--------"<<endl;
                                    POOLDEJugador2->PimUltiMostrarLDE(POOLDEJugador2->primero);
                                    cout<<"---FIN FICHAS disponibles para jugador 2--------"<<endl;
                                    printf("Ingrese letra.\n");
                                    scanf("%s",NomJugador);
                                    Letrax=NomJugador;

                                     if(1==1)
                                    {
                                    NODOLDEJUGA *NODOLETRA = POOLDEJugador2->obtenerLetraLDE(Letrax);

                                    if(NODOLETRA != NULL)
                                    {
                                    cout <<"Letra SI esta en la lista doblemente en lazada del jugador 2."<<endl;
                                     MatrizGeneral->InsertarEnMatrizOrtogonal(CordenadaX,CordenadaY,NODOLETRA->letra,NODOLETRA->puntajeletra);
                                     POOLDEJugador2->EliminarLDEO(Letrax);
                                    }
                                    else
                                    {
                                        cout <<"Letra NO esta en la lista doblemente en lazada del jugador 2."<<endl;
                                    }
                                    }

                                    MatrizGeneral->GraficarMatrizGeneral("ArchivoMatriz.txt");
                                    system("dot -Tpng ArchivoMatriz.txt -o ArchivoMatriz.png");
                                    system("xdg-open ArchivoMatriz.png");
                                    //POOLDEJugador2->GraficarLDE2(POOLDEJugador2->primero,jugador2nombre);
                                    //system("dot -Tpng LDEJFisJug2.txt -o LDEJFisJug2.png");
                                    //system("xdg-open LDEJFisJug2.png");

                                    break;
                                case 3:
                                    cout <<"------------------Ingresando nuevas fichas al jugador 2."<<endl;

                                    POOLDEJugador2 = new LDEJugador();
                                    if(POOCOLA->primerocola!=NULL)
                                    {

                                      for(int i =0; i<7; i++)
                                        {
                                        NODOLDEJUGA *jj = new NODOLDEJUGA(POOCOLA->primerocola->letra,POOCOLA->primerocola->puntaje);
                                        POOLDEJugador2->InsertarLDE(jj);
                                        POOCOLA->Desencolar();
                                        }
                                    POOLDEJugador2->GraficarLDE2(POOLDEJugador2->primero,jugador2nombre);
                                    system("dot -Tpng LDEJFisJug2.txt -o LDEJFisJug2.png");
                                    system("xdg-open LDEJFisJug2.png");



                                    }else
                                    {
                                        cout<<"Cola de fichas vacia"<<endl;
                                    }

                                    opcionxjugador=4;
                                    OpcionDeTurno=1;
                                    cout <<"--------------FIN----Ingresando nuevas fichas al jugador 2."<<endl;

                                    break;
                                case 4:
                                    cout<<"Turno Finalizado"<<endl;

                                        if(1==1)
                                    {
                                    //verificando palabra por fila
                                    string palabrafila = MatrizGeneral->RecorrerFilasPa();
                                    cout <<"palabra capturada fila "+palabrafila<<endl;

                                    DICNODOLDEC *DATO =POODICLDEC->obtenerPalabra(palabrafila);
                                    if(DATO!=NULL)
                                    {
                                        cout<<"Palabra si esta en el diccionario: "+DATO->palabra<<endl;
                                        cout<<"Palabra se encuentra en forma vertical o horizonal: "+DATO->palabra<<endl;
                                        PuntaJugador2 = MatrizGeneral->RecorrerFilasLetraPuntaje();
                                        cout<<"Puntaje jugador 2: "+ std::to_string(PuntaJugador2)<<endl;


                                    }else
                                    {
                                    cout<<"Palabra  "<<palabrafila<<" no esta formada horizontalmente"<<endl;
                                       //verificando palabra por columna
                                    string palabracol = MatrizGeneral->RecorrerColumnasPa();
                                    cout <<"palabra capturada columna "+palabracol<<endl;
                                    DICNODOLDEC *DATOCOL =POODICLDEC->obtenerPalabra(palabracol);
                                    if(DATOCOL!=NULL)
                                    {
                                        cout<<"Palabra si esta en el diccionario: "+DATOCOL->palabra<<endl;
                                        cout<<"Palabra se encuentra en forma VERTICAL "+DATOCOL->palabra<<endl;

                                    }else
                                    {
                                        cout<<"Palabra  "<<palabracol<<" no esta en el dirccionario. COLUMNA"<<endl;
                                    }

                                    }

                                    }
                                    //PuntaJugador2++;
                                    OpcionDeTurno=1;
                                    break;
                                default:
                                    cout<<"La opcion que ingreso es incorrecta.\n"<<endl;
                                    break;
                                }
                            }
                            while(opcionxjugador!=4);

                        break;
                        case 4:

                            if(PuntaJugador1==PuntaJugador2)
                            {
                                cout<<"Juego Empatado"<<endl;
                            }else if(PuntaJugador1>PuntaJugador2)
                            {
                                cout<<"jugador 1."<<jugador1nombre<<" ganador"<<endl;
                                cout<<"Puntaje."<<PuntaJugador1<<endl;

                            }else
                            {
                                cout<<"jugador 2. "<<jugador2nombre<<" ganador"<<endl;
                                cout<<"Puntaje."<<PuntaJugador2<<endl;
                            }

                            if(POOABB->raiz!=NULL)
                            {
                            NODOABB *Usuer1 = POOABB->ObtenerNodoABB(jugador1nombre);
                            if(Usuer1!=NULL)
                                        {
                            NodoLS *notajg1 = new NodoLS(PuntaJugador1);
                            Usuer1->POOLSOrdenada->InsertarLSOrdenado(notajg1);
                                        }else
                                        {
                                    cout <<"No se le asigno puntaje al jugador uno usuario no encontrado."<<endl;
                                        }

                            NODOABB *Usuer2JG = POOABB->ObtenerNodoABB(jugador2nombre);
                            if(Usuer2JG!=NULL)
                                        {
                            NodoLS *notajg2 = new NodoLS(PuntaJugador2);
                            Usuer2JG->POOLSOrdenada->InsertarLSOrdenado(notajg2);
                                        }else
                                        {
                                    cout <<"No se le asigno puntaje al jugador dos usuario no encontrado."<<endl;
                                        }

                                }
                            cout<<"Salida exitosa del juego.\n"<<endl;

                            OpcionDeTurno=3;
                        break;
                        default:
                            system("clear");
                            cout<<"La opcion que ingreso es incorrecta.\n"<<endl;
                        break;
                        }


                    }while(OpcionDeTurno!=3);

                    //MatrizGeneral->InsertarEnMatrizOrtogonal(0,0,"A",2);
                    //MatrizGeneral->InsertarEnMatrizOrtogonal(1,0,"D",3);
                    //MatrizGeneral->InsertarEnMatrizOrtogonal(2,0,"G",4);
                    //MatrizGeneral->InsertarEnMatrizOrtogonal(0,1,"B",3);
                    //MatrizGeneral->InsertarEnMatrizOrtogonal(1,1,"E",2);
                    //MatrizGeneral->InsertarEnMatrizOrtogonal(2,1,"H",4);
                    //MatrizGeneral->InsertarEnMatrizOrtogonal(0,2,"C",5);
                    //MatrizGeneral->InsertarEnMatrizOrtogonal(1,2,"F",6);
                    //MatrizGeneral->InsertarEnMatrizOrtogonal(2,2,"I",7);
                    //MatrizGeneral->InsertarEnMatrizOrtogonal(4,4,"J",8);
                    //MatrizGeneral->InsertarEnMatrizOrtogonal(2,4,"K",9);
                    //MatrizGeneral->InsertarEnMatrizOrtogonal(100,100,"M",10);
                    //MatrizGeneral->InsertarEnMatrizOrtogonal(200,200,"dos",110);

                    printf("---------------Fin-del juego--------------------------------------.\n");
                    }
                    else
                    {
                    printf("Arbol Binario Se Encuentra Vacio No hay jugadores-disponibles\n");
                    }
                    } else
                    {
                    cout<<"El diccionario de palabras esta vacio, leea un archivo de entrada."<<endl;
                    }

                    break;
                case 3:
                    break;
                case 4:
                    cout<<"Salida exitosa del menu de juego.\n"<<endl;
                    break;
                 default:
                    system("clear");
                    cout<<"La opcion que ingreso es incorrecta.\n"<<endl;
                    break;
            }


            }while(OpcionMenuJuego!=4);
            break;
        case 3:


            do{

            printf("---------------REPORTES.-----------------------\n");
            printf("1. DICCIONARIO\n");
            printf("2. FICHAS DISPONIBLES EN EL JUEGO\n");
            printf("3. ARBOL BINARIO DE BUSQUEDA\n");
            printf("4. Puntaje de un determinado jugador.\n");
            printf("5. Los mejores puntajes.\n");
            printf("6. MATRIZ DISPERSA.\n");
            printf("7. FICHAS POR JUGADOR.\n");
            printf("8. SALIR.\n");
            printf("-------------------------------------------------\n");
            printf("Ingreso Opciones a trabajar.\n");
            scanf("%d",&OpcionMenuReportes);

            switch(OpcionMenuReportes)
            {
                case 1:
                    if(POODICLDEC!=NULL)
                    {
                POODICLDEC->DICmostrarLDEC(POODICLDEC->primero);
                POODICLDEC->GraficarLDEC(POODICLDEC->primero);
                system("dot -Tpng LDECircular.txt -o LDECircular.png");
                system("xdg-open LDECircular.png");
                    }
                    else
                    {
                        cout<<"No contiene datos aun."<<endl;
                    }

                    break;
                case 2:

                    if(POOCOLA!=NULL)
                    {
                        POOCOLA->GraficarCola(POOCOLA->primerocola);
                    system("dot -Tpng FichasCola.txt -o FichasCola.png");
                    system("xdg-open FichasCola.png");


    cout<<"Letra A: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"A"))<<endl;
    cout<<"Letra B: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"B"))<<endl;
    cout<<"Letra C: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"C"))<<endl;
    cout<<"Letra D: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"D"))<<endl;
    cout<<"Letra E: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"E"))<<endl;
    cout<<"Letra F: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"F"))<<endl;
    cout<<"Letra G: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"G"))<<endl;
    cout<<"Letra H: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"H"))<<endl;
    cout<<"Letra I: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"I"))<<endl;
    cout<<"Letra J: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"J"))<<endl;
    cout<<"Letra K: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"K"))<<endl;
    cout<<"Letra L: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"L"))<<endl;
    cout<<"Letra M: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"M"))<<endl;
    cout<<"Letra N: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"N"))<<endl;

    cout<<"Letra Ñ: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"Ñ"))<<endl;

    cout<<"Letra O: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"O"))<<endl;

    cout<<"Letra P: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"P"))<<endl;
    cout<<"Letra Q: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"Q"))<<endl;
    cout<<"Letra R: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"R"))<<endl;
    cout<<"Letra S: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"S"))<<endl;
    cout<<"Letra T: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"T"))<<endl;
    cout<<"Letra U: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"U"))<<endl;
    cout<<"Letra V: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"V"))<<endl;
    cout<<"Letra W: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"W"))<<endl;
    cout<<"Letra X: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"X"))<<endl;
    cout<<"Letra Y: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"Y"))<<endl;
    cout<<"Letra Z: "+std::to_string(POOCOLA->NumeroDeLetra(POOCOLA->primerocola,"Z"))<<endl;


                    }
                    else
                    {
                    cout<<"No contiene datos aun."<<endl;
                    }

                    break;
                case 3:

                    if(POOABB->raiz!=NULL)
                    {
                      POOABB->Recorrido_Pre_Orden(POOABB->raiz);
                    POOABB->Recorrido_En_Orden(POOABB->raiz);
                    POOABB->Recorrido_Post_Orden(POOABB->raiz);
                    POOABB->GraficarABB(POOABB->raiz);
                    system("dot -Tpng ArbolBusqueda.txt -o ArbolBusqueda.png");
                    system("xdg-open ArbolBusqueda.png");
                    POOABB->POOLSPreorden->GraficarLSimple(POOABB->POOLSPreorden->primero);
                    system("dot -Tpng LSPreorden.txt -o LSPreorden.png");
                    system("xdg-open LSPreorden.png");
                    POOABB->POOLSInorden->GraficarLSimple2(POOABB->POOLSInorden->primero);
                    system("dot -Tpng LSInorden.txt -o LSInorden.png");
                    system("xdg-open LSInorden.png");
                    POOABB->POOLSPostorden->GraficarLSimple3(POOABB->POOLSPostorden->primero);
                    system("dot -Tpng LSPostorden.txt -o LSPostorden.png");
                    system("xdg-open LSPostorden.png");
                    POOABB->POOLSPreorden->primero=NULL;
                    POOABB->POOLSPreorden->ultimo=NULL;
                    POOABB->POOLSInorden->primero=NULL;
                    POOABB->POOLSInorden->ultimo=NULL;
                    POOABB->POOLSPostorden->primero=NULL;
                    POOABB->POOLSPostorden->ultimo=NULL;
                    }

                    else
                    {
                    cout<<"No contiene datos aun."<<endl;
                    }




                    break;
                case 4:

                    NomJugador = (char*)malloc(200);

                    printf("-----------Puntajes de un determinado jugador.----------.\n");
                    if(POOABB->raiz!=NULL)
                    {
                    printf("---Usuarios o jugadores disponibles.\n");
                    POOABB->RecorrerABBjugador(POOABB->raiz);
                    printf("---------------------------------------------------------.\n");
                    printf("----------Ingrese jugador para verificar sus puntajes----.\n");
                    scanf("%s",NomJugador);
                    NODOABB *Usuer1 = POOABB->ObtenerNodoABB(NomJugador);
                    if(Usuer1!=NULL)
                    {
                    cout<<Usuer1->jugador<<endl;
                    printf("---------------Mostrando Sus Puntaje----------------------.\n");
                    Usuer1->POOLSOrdenada->MostrarLS_PrimeroUltimoOrdenada(Usuer1->POOLSOrdenada->primero);
                    Usuer1->POOLSOrdenada->GraficarPuntajeJugador(Usuer1->POOLSOrdenada->primero,Usuer1->jugador);
                    system("dot -Tpng PuntajeJugador.txt -o PuntajeJugador.png");
                    system("xdg-open PuntajeJugador.png");
                    }else
                    {
                    printf("--Jugador No Se Encuentra En El Arbol------------------.\n");
                    }


                    printf("---------------Fin---------------------------------------.\n");
                    }
                    else
                    {
                    printf("----!-Arbol Binario Se Encuentra Vacio-!-----------------.\n");
                    }


                    break;
                case 5:
                    if(POOABB->raiz!=NULL)
                    {
                    POOABB->RecorrerABBPuntajeGeneral(POOABB->raiz);
                    POOABB->POOLSPMejoresPuntajes->MostrarLSOrdenadaPuntajes(POOABB->POOLSPMejoresPuntajes->primero);
                    POOABB->POOLSPMejoresPuntajes->GraficarPuntajeGeneral(POOABB->POOLSPMejoresPuntajes->primero);
                    system("dot -Tpng PuntajeGeneral.txt -o PuntajeGeneral.png");
                    system("xdg-open PuntajeGeneral.png");
                    }
                   else
                    {
                    cout<<"No contiene datos aun."<<endl;
                    }



                    break;
                case 6:
                    if(MatrizGeneral!=NULL)
                    {
                    MatrizGeneral->GraficarMatrizGeneral("ArchivoMatriz.txt");
                    system("dot -Tpng ArchivoMatriz.txt -o ArchivoMatriz.png");
                    system("xdg-open ArchivoMatriz.png");
                    }
                    else
                    {
                       cout<<"No contiene datos aun."<<endl;
                    }

                    break;
                case 7:
                    if(POOLDEJugador1!=NULL)
                    {
                    POOLDEJugador1->PimUltiMostrarLDE(POOLDEJugador1->primero);
                    POOLDEJugador2->PimUltiMostrarLDE(POOLDEJugador2->primero);
                    POOLDEJugador1->GraficarListaDoble(POOLDEJugador1->primero,jugador1nombre);
                    system("dot -Tpng LDEJFisJug1.txt -o LDEJFisJug1.png");
                    system("xdg-open LDEJFisJug1.png");
                    POOLDEJugador2->GraficarLDE2(POOLDEJugador2->primero,jugador2nombre);
                    system("dot -Tpng LDEJFisJug2.txt -o LDEJFisJug2.png");
                    system("xdg-open LDEJFisJug2.png");
                    }
                    else
                    {
                     cout<<"No contiene datos aun."<<endl;
                    }

                    break;

                case 8:
                    cout<<"Salida exitosa del menu de reportes.\n"<<endl;
                    break;
                 default:
                    system("clear");
                    cout<<"La opcion que ingreso es incorrecta.\n"<<endl;
                    break;
            }


            }while(OpcionMenuReportes!=8);

           break;
        case 4:
            cout<<"Salida Del Sistema Exitosa.\n"<<endl;
            break;
        default:
            //system("cls");
            system("clear");
            cout<<"La opcion que ingreso es incorrecta.\n"<<endl;
            break;
          }

    }while(OpcionMenuPrincipal!=4);
    return 0;
}






