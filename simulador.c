#include<stdio.h>
#define parado 0
#define esteiraMov 1
#define raioX 2
#define finalizaMov 3
int main()
{
    //entradas 0=off,1=on//
    char B1=0;
    char S1=0;
    char S2=0;
    char BE=0;
    char timer=0;
    //saida 0=off,1=on//
    char motor=0;
    char Raiox=0;
    //var de controle da maquina de estado//
    char estado = parado;
    
    while(1){
    switch(estado)
    {
        case parado:
        motor=0;
        Raiox=0;
        if(B1==1){
          estado=esteiraMov;
        }
        break;
        case esteiraMov:
        motor=1;
        Raiox=0;
        if(BE==1){
          estado=parado;
        }
        else if(S1==1){
          estado=raioX;
        }
        break;
          case raioX:
        motor=0;
        Raiox=1;
        if(BE==1){
          estado=parado;
        }
        else if(timer==1){
          estado=finalizaMov;
        }
        break;
            case finalizaMov:
        motor=1;
        Raiox=0;
        if(BE==1)
          {
          estado=parado;
          }
        else if(S2==1){
          estado=parado;
        }
        break;
        default:
          estado=parado;
          break;
        
          
    }
    }
    
    
}
