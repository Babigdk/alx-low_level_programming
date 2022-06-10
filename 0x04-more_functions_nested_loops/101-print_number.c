#include "main.h"
void print_integer(int m);

/**
 * print_number - a function to return an integer
 * @n: input
 * Return: 0
 */
void print_number(int n)
{
	int i, j, digit, digits, power;
	unsigned int temp, numchar, number;

	digit = 0;
	if (n < 0)
	{
		_putchar('_');
		temp = -n;
	}
	else
	{
		temp = n;
	}

	number = temp;

	while (number >= 10)
	{
		number = number / 10;
		digit++;
	}
	digits = digit + 1;
	power = 1;
	i = 1;

	while (i < digits)
	{
		power = power * 10;
		i++;
	}
	j = power;
	while (j >= 1)
	{
		number = (temp / j) % 10;
		_putchar(number + '0');
		j = j / 10;
	}
}
