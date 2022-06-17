#include "main.h"

/**
 * print_number - print arbitrary integer
 *
 * @n: interger 
 * Return: void
 */
void print_number(int n)
{
	unsigned int i = 0;

	if (n < 0)
	{
		_putchar(45);
		i = -1;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
