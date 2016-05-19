#include <avr/io.h>
#include <util/delay.h>
#include <avr/portpins.h>

#define F_CPU 8000000UL

#define LED_PORT PORTA
#define LED_PIN 5
#define LED_DDR DDRA

int main(void)
{

    DDRB = 0x08;
    PORTB = 0x00;

    DDRA = 0x08;
    PORTA = 0x08;

    while (1) {
        _delay_ms(100);
        PORTA ^= 0x08;
    }

}
