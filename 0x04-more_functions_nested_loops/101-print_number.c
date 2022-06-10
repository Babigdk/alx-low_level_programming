#include "main.h"
void print_integer(int m);

/**
 * print_number - a function to return an integer
 * @n: input
 * Return: 0
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('_');
		print_integer(n * -1);
	}
	else
		print_integer(n);
}

/**
 * print_integer - a function to be call
 * @m: input unsigned
 * Return: Always 0
 */

void print_integer(int m)
{
	int i = 1000000000;

	for (; i >= 1; i /= 10)
		if (m / i != 0)
		{
			_putchar((m / i) % 10 + '0');
		}
}
