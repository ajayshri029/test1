#define F_CPU 8000000UL
#include<avr/io.h>
#include<util/delay.h>

#define LED_PIN PB0
int main(void) {
    DDRB |= (1 << LED_PIN);  // Set PB0 as output

    while (1) {
        PORTB ^= (1 << LED_PIN);  // Toggle LED
        _delay_ms(500);           // Delay 500ms
    }
}