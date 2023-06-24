#include "main.h"
#include <avr/io.h>
#include <util/delay.h>

#define LED_PIN_RED 3  // pin 3 on Arduino Nano is mapped to physical pin 3
#define LED_PIN_YELLOW 4  // pin 4 on Arduino Nano is mapped to physical pin 4

void turnOnTheLights(void){
  DDRD = DDRD | 0b00011000;// sets  3 and 4 as output pins

  while(1){
    PORTD = 0b00001000; // write 1 to pin 3 and 0 to all other pins
    _delay_ms(1000); // wait 1 sek
    PORTD = 0b00010000; // write 1 to pin 4 and 0 to all other pins
    _delay_ms(1000); // wait 1 sek
  }
  return 0;
}