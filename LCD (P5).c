#include <avr/io.h>
#include "LCD.h"
#include <util/delay.h>

#define  F_CPU 8000000UL

int main(void)
{
	LCD_int('A');
	LCD_send_char ('A','a');
	_delay_ms(100);
	LCD_move_coursor ('a',2,4);
	_delay_ms(100);
	LCD_send_string ('a',"AHMED");

    while(1)
    {
        //TODO:: Please write your application code 
    }
}
