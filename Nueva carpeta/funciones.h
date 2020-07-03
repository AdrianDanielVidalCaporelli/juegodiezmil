#include <iostream>
#include <ctime>
using namespace std;


#ifndef FUNCIONESDIEZMILDOS_H_INCLUDED
#define FUNCIONESDIEZMILDOS_H_INCLUDED



void mostrar(int vec[]){

    for (int c=0;c<6;c++){
        cout<<vec[c]<<" ";

    }
    cout<<endl;
}
void mezclar(int vec[]){

    vec[0]=1+rand()%6;
    vec[1]=1+rand()%6;
    vec[2]=1+rand()%6;
    vec[3]=1+rand()%6;
    vec[4]=1+rand()%6;
    vec[5]=1+rand()%6;

}



//LAS 9 JUGADAS
int JuegoDeUno(int vec[]){

    int unos=0;
    for(int c=0;c<6;c++){
        if (vec[c]==1){
            unos++;
        }
    }
    if(unos==2){
        return 200;
    }
    else{
        return 0;
    }
}
int JuegoDeCinco(int vec[]){
    int cincos=0;
    for(int c=0;c<6;c++){
        if (vec[c]==5){
            cincos++;
        }
    }
    if (cincos==2){
        return 100;
    }else{return 0;}
}
int TrioUno(int vec[]){
    int unos=0;
    for(int c=0;c<6;c++){
        if (vec[c]==1){
            unos++;
        }
    }
    if (unos==3){
        return 1000;
    }else{
        return 0;
    }
}
int TrioX(int vec[]){
    int unos=0,doss=0,tress=0,cuatros=0,cincos=0,seiss=0;

    for (int c=0;c<6;c++){
        if (vec[c]==1){unos++;}
        if (vec[c]==2){doss++;}
        if (vec[c]==3){tress++;}
        if (vec[c]==4){cuatros++;}
        if (vec[c]==5){cincos++;}
        if (vec[c]==6){seiss++;}
    }


    if (seiss==3){return 600;}
    else if(cincos==3){return 500;}
    else if(cuatros==3){return 400;}
    else if(tress==3){return 300;}
    else if(doss==3){return 200;}
    else if(unos==3){return 100;}
    else{return 0;}
}
int TrioXtt(int vec[]){

int uno=0,dos=0,tres=0,cuatro=0,cinco=0,seis=0;
    for (int c=0;c<6;c++){
        if(vec[c]==1){uno++;}
        if(vec[c]==2){dos++;}
        if(vec[c]==3){tres++;}
        if(vec[c]==4){cuatro++;}
        if(vec[c]==5){cinco++;}
        if(vec[c]==6){seis++;}
    }

    if ((seis==4)||(seis==5)){return 200*6;}
    else if ((cinco==4)||(seis==5)){return 200*5;}
    else if ((cuatro==4)||(seis==5)){return 200*4;}
    else if ((tres==4)||(seis==5)){return 200*3;}
    else if ((dos==4)||(seis==5)){return 200*2;}
    else{return 0;}
}
int TrioUnoAmpliado(int vec[]){
    int unos=0;
    for(int c=0;c<6;c++){
        if(vec[c]==1){unos++;}
    }


    if ((unos==4)||(unos==5)){
        return 2000;
    }else {return 0;}

}
int TresPares(int vec[]){
    int unos=0,doss=0,tress=0,cuatros=0,cincos=0,seiss=0;
    for(int c=0;c<6;c++){
        if (vec[c]==1){unos++;}
        if (vec[c]==2){doss++;}
        if (vec[c]==3){tress++;}
        if (vec[c]==4){cuatros++;}
        if (vec[c]==5){cincos++;}
        if (vec[c]==6){seiss++;}
    }

    int pares=0;
    if (unos==2){pares++;}
    if (doss==2){pares++;}
    if (tress==2){pares++;}
    if (cuatros==2){pares++;}
    if (cincos==2){pares++;}
    if (seiss==2){pares++;}

    if (pares==3){
        return 1000;
    }else{return 0;}
}
int EscaleraLarga(int vec[]){
    int uno=0,dos=0,tres=0,cuatro=0,cinco=0,seis=0;
    for(int c=0;c<6;c++){
        if (vec[c]==1){uno++;}
        if (vec[c]==2){dos++;}
        if (vec[c]==3){tres++;}
        if (vec[c]==4){cuatro++;}
        if (vec[c]==5){cinco++;}
        if (vec[c]==6){seis++;}
    }

    if ((uno==1)&&(dos==1)&&(tres==1)&&(cuatro==1)&&(cinco==1)&&(seis==1)){
        return 1500;
    }else{return 0;}

}
int Sexteto(int vec[]){
    int unos=0;
    for(int c=0;c<6;c++){
        if(vec[c]==1){
            unos++;
        }
    }

    if(unos==6){
        return 1000000;
    }else{return 0;}

}






void Nombrar(int vec[]){
    int VecResultados[9]={
    JuegoDeUno(vec),
    JuegoDeCinco(vec),
    TrioUno(vec),
    TrioX(vec),
    TrioXtt(vec),
    TrioUnoAmpliado(vec),
    TresPares(vec),
    EscaleraLarga(vec),
    Sexteto(vec)};

    int PosMax=0,NumMax=0;
    for(int c=0;c<9;c++){
        if(VecResultados[c]>NumMax){
            PosMax=c;
            NumMax=VecResultados[c];
        }
    }

    switch(PosMax){
        case 0:cout<<" juego de uno ";break;
        case 1:cout<<" juego de cinco ";break;
        case 2:cout<<" trio uno ";break;
        case 3:cout<<" trio x ";break;
        case 4:cout<<" trio x++ ";break;
        case 5:cout<<" trio uno ampliado ";break;
        case 6:cout<<" tres pares ";break;
        case 7:cout<<"a escalera larga ";break;
        case 8:cout<<" sexteto ";break;
    }



}
int ValorTirada(int vec[]){

    int MaxValor=0;
    int VecResultados[9]={
    JuegoDeUno(vec),
    JuegoDeCinco(vec),
    TrioUno(vec),
    TrioX(vec),
    TrioXtt(vec),
    TrioUnoAmpliado(vec),
    TresPares(vec),
    EscaleraLarga(vec),
    Sexteto(vec)};


    for(int c=0;c<9;c++){
        if (VecResultados[c]>MaxValor){
            MaxValor=VecResultados[c];
        }
    }



    return MaxValor;
}




/*
int ValorTirada(int vec[]){


    //int saleno=rand()%2;


    return 10000;

}
*/




void Jugar(int PuntajeMasAlto[],int RondasPuntajeMasAlto[],char NombreMax[]){
    system("cls");
    cout<<"<<no digas que no te lo advertimos>>"<<endl;

    int tirada[6]={1,2,3,4,5,6};


    int Puntaje=0,ronda=0;

    while (Puntaje<10000){

        ronda++;
        int Provisorio=0,NumeroTirada=0;
        bool continuar=true;


        while(continuar){

            NumeroTirada++;
            if (NumeroTirada==1){
                cout<<"inicia ronda "<<ronda<<" tirada "<<NumeroTirada;
            }else{
                cout<<"continua ronda "<<ronda<<" tirada "<<NumeroTirada;
            }


            cout<<"     puntaje total hasta ahora "<<Puntaje<<endl;

            cout<<endl<<endl<<"tus dados... ";
            mezclar(tirada);mostrar(tirada);
            cout<<endl<<"";


            if (ValorTirada(tirada)==0){
                cout<<"no te salio nada master"<<endl<<"presione una tecla para volver a tirar..."<<endl;
                system("pause>null");
                continuar=false;//turno perdido
            }else{
                Provisorio+=ValorTirada(tirada);
                if(Provisorio+Puntaje<10000){
                    cout<<"sacaste un";Nombrar(tirada);cout<<ValorTirada(tirada)<<" puntos"<<endl;
                    cout<<"hasta ahora el valor de la ronda seria de "<<Provisorio<<endl;
                    cout<<"seguir tirando bro?(S/N)"<<endl;
                    char r;cin>>r;
                    if(r=='s'){
                        continuar=true;
                    }else{
                        Puntaje+=Provisorio;
                        continuar=false;
                    }
                }else if(Provisorio+Puntaje>10000){
                    if (Provisorio+Puntaje>=1000000){
                        cout<<endl<<"obtuviste sexteto, con esto ganas la partida "<<endl;
                        Puntaje=10000;
                        system("pause");
                        continuar=false;
                    }else{
                        cout<<"sacaste un";Nombrar(tirada);cout<<ValorTirada(tirada)<<" puntos"<<endl;
                        cout<<"con esto te estarias pasando de largo bro"<<endl;
                        system("pause");
                        continuar=false;
                    }
                }else{
                    cout<<"sacaste un";Nombrar(tirada);cout<<ValorTirada(tirada)<<" puntos"<<endl;
                    cout<<"lo lograste, llegaste al 10mil bro, ya sos distinto"<<endl;
                    system("pause");
                    Puntaje=10000;continuar=false;
                }
            }
        }
        system("cls");
    }





    //compareguardador de puntajes
    if (Puntaje>PuntajeMasAlto[0]){
        PuntajeMasAlto[0]=Puntaje;RondasPuntajeMasAlto[0]=ronda;cout<<"tenemos el nuevo record"<<endl<<"ingrese su nombre _";
        cin>>NombreMax;
    }else if(Puntaje==PuntajeMasAlto[0]){
        if (ronda<RondasPuntajeMasAlto[0]){
            RondasPuntajeMasAlto[0]=ronda;
        }
    }








}





void MostrarPuntajes(int PuntajeMasAlto,int RondasPuntajeMasAlto,string NombreMax){

    cout<<"Hasta ahora el puntaje mas alto es de "<<PuntajeMasAlto<<endl<<" dentro de la ronda numero "<<RondasPuntajeMasAlto<<" hecho por el jugador "<<NombreMax<<endl;
    system("pause>null");
    system("cls");


}





#endif // FUNCIONESDIEZMIL_H_INCLUDED
