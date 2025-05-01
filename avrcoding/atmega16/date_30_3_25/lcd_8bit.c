// this is an update
#define F_CPU 8000000UL
#include<avr/io.h>
#include<util/delay.h>


#define RS PC0
#define Rw PC1
#define EN PC2

void lcd_init(void);
void lcd_print(char *str);
void lcd_cmd(char cmd);
void lcd_data(char data);


int main(){
    DDRD=0xff;
    DDRC=((1<<RS)|(1<<Rw)|(1<<EN));
    _delay_ms(10);
    lcd_init();
    lcd_print("Hello Ajay");
    while(1);

}
void lcd_print(char *str){
    while(*str){
        lcd_data(*str);
        str++;
    }
}
void lcd_init(void){
    lcd_cmd(0x38);
    lcd_cmd(0x01);
    lcd_cmd(0x0C);
    lcd_cmd(0x06);
}
void lcd_cmd(char cmd){
    PORTD=cmd;
    PORTC&=~(1<<RS);
    PORTC|=(1<<EN);
    _delay_ms(10);
    PORTC&=~(1<<EN);
    // RS=0;
    // EN=1;
    // _delay_ms(10);
    // EN=0;
}
void lcd_data(char data){
    PORTD=data;
    PORTC|=(1<<RS);
    PORTC|=(1<<EN);
    _delay_ms(10);
    PORTC&=~(1<<EN);
    // RS=1;
    // EN=1;
    // _delay_ms(10);
    // EN=0;
}
