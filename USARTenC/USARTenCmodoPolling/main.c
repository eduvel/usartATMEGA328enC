/*
 * USARTenCmodoPollong.c
 *
 * Created: 04/11/2020 11:56:06
 * Author : Dell
 */ 

#include <avr/io.h>


int main(void)
{
	UCSR0A=0;
	UCSR0B=(1<<RXEN0)|(1<<TXEN0);
	UCSR0C=(1<<UCSZ01)|(1<<UCSZ00);
	UBRR0=103;
	while (1)
	{
		if(UCSR0A&(1<<RXC0)){
			UDR0=UDR0;
		}
	}
}