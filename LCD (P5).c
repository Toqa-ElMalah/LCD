/*
 * LCD__P5_.c
 *
 * Created: 10/20/2023 2:52:42 PM
 *  Author: eman
 */ 


#include <avr/io.h>
#include "LCD.h"
#define  F_CPU 8000000UL
#include <util/delay.h>

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