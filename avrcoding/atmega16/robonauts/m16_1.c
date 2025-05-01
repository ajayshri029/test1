#define F_CPU 8000000ul
#include<avr/io.h>
#include<util/delay.h>

int main(){

    DDRA=0xff;
    while(1){
    PORTA=0x55;
    _delay_ms(200);
    PORTA=0xaa;
    _delay_ms(300);
    }
}