#define F_CPU 8000000ul
#include<avr/io.h>
#include<util/delay.h>

int main(){
    DDRC = 0XFF;

    while(1){
    PORTC=0XFF;
    _delay_ms(300);
    PORTC=0x00;
    _delay_ms(200);
    }
    // while(1){
    // PORTC^|=PORTC;
    // PORTC|^=PORTC;
    // PORTC^=PORTC;
    // _delay_ms(250);
    // }
}