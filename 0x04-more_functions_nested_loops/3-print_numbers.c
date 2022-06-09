#include "main.h"

/**
 * print_numbers - Functions that print the numbers from 0 - 9
 * Return: void
 */

void print_numbers(void)
{
	int  i;
	
	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
