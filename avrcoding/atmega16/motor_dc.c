#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

void motor_init() {
    DDRD |= (1<<PD0)|(1<<PD1)|(1<<PD2)|(1<<PD3); // All H-Bridge inputs as outputs
}

void motor_forward() {
    PORTD |= (1<<PD0);   // Q1 ON
    PORTD &= ~(1<<PD1);  // Q2 OFF
    PORTD &= ~(1<<PD2);  // Q3 OFF
    PORTD |= (1<<PD3);   // Q4 ON
}

void motor_backward() {
    PORTD &= ~(1<<PD0);  // Q1 OFF
    PORTD |= (1<<PD1);   // Q2 ON
    PORTD |= (1<<PD2);   // Q3 ON
    PORTD &= ~(1<<PD3);  // Q4 OFF
}

void motor_stop() {
    PORTD &= ~((1<<PD0)|(1<<PD1)|(1<<PD2)|(1<<PD3)); // All OFF
}

int main() {
    motor_init();

    while(1) {
        motor_forward();
        _delay_ms(2000);

        motor_backward();
        _delay_ms(2000);

        motor_stop();
        _delay_ms(1000);
    }
}
