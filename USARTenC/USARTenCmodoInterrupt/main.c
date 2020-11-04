/*
 * USARTenCmodoInterrupt.c
 *
 * Created: 04/11/2020 11:56:59
 * Author : Velazquez Eduardo
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

int main(void)
{
	UCSR0A=0;
	UCSR0B=(1<<RXCIE0)|(1<<RXEN0)|(1<<TXEN0);
	UCSR0C=(1<<UCSZ01)|(1<<UCSZ00);
	UBRR0=103;
	sei();
	while (1)
	{
	}
}

ISR(USART_RX_vect){
	UDR0=UDR0;
}

