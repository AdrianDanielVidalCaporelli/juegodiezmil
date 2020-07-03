#include <iostream>
using namespace std;
#include "funciones.h"





int main(){
    srand(time(NULL));


    //string NombrePuntajeMasAlto; SE PODRA PONER NOMBRE :(

    int PuntajeMasAlto[2]={0,0}; int RondasPuntajeMasAlto[2]={0,0};char NombreMax[20]="nadie";

    cout<<"Bienvenido al 10mil2.0 el juego que juega con el jugador"<<endl<< "hasta que este no vuelve a ser el mismo"<<endl<<endl;
    system("pause");

    bool Continuar=true;
    while (Continuar){

        cout<<"Menu principal. Seleccione una opcion"<<endl<<"1)Juego de un jugador"<<endl<<"5)Mostrar tabla"<<endl<<"6)Salir"<<endl;

        int opcion=0;cin>>opcion;
        switch(opcion){


            case 1:Jugar(PuntajeMasAlto,RondasPuntajeMasAlto,NombreMax);break;

            case 5:MostrarPuntajes(PuntajeMasAlto[0],RondasPuntajeMasAlto[0],NombreMax);break;

            case 6:Continuar=false;

        }

    }


























    return 0;
}
