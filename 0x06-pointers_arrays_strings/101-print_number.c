#include "main.h"

/**
 * print_number - print arbitrary integer
 *
 * @n: interger 
 * Return: void
 */
void print_number(int n)
{
	unsigned int u, i;

	if (n < 0)
	{
		u = -n;
		_putchar('_');
	}
	else
	{
		u = n;
	}
	i = 1000000000;
	do {
		if (i <= u || i == 1)
			_putchar(u / i % 10 + '0');
		i /= 10;
	} while (i != 0);
}
