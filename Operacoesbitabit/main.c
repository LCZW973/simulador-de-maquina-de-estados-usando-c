#include<stdio.h>
#include<stdint.h>
int main(){
    //questao A//
    uint8_t status = 0b01111111;//127(10)
    if((status&(1<<6)) != 0 )
      printf(" o bit 6 esta em 1\n");
      
    //questao B//
    //0b10000000
    status = (1<<7);
    if((status&(1<<3)) == 0)
      printf(" o bit 3 esta em 0 ");
          
    //questao C//
    //0b11111100
    status = 0b01111111;//127(10)
    status = status|(1<<7);
    status = status&~(1<<0); 
    status = status&~(1<<1);
    //0b00000011,inverta todos os bits
    status = ~status ; 
    
    //D 0b00100000//
    status = 0b01111111;//127(10)
    status = (1<<5) ; 
    
    
    return 0 ;
}
