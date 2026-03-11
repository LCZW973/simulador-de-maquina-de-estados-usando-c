#include <stdio.h>
#include <stdint.h>
int main(){
    uint8_t status = 0b00000000;
    
    if((status&0b10000000)==0b10000000){
       printf (" Motor 2 liga\n ");
       status = status&~0b00011101;
       status |=(1<<1); 
    }   
    else if((status&0b01000000)==0b01000000){
       printf (" Motor 1 liga\n ");
       status = status&~(0b00011110);
       status |=(1<<0); 
    }
    else if((status&0b00100000)==0b00100000){
       printf (" Motor inverte\n ");
       status = ~status ;
       status = status&~0b11000000;
       status |=(1<<5); 
    }
    else
    {
        printf( "Motores off\n");
        status= 0 ;
    }
    
       printf("Valor final de status (Decimal): %u\n", status);
       
       return 0 ;
}
