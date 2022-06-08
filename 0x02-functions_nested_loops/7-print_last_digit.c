#include "main.h"

/**
 * print_last_digit - print last number
 * @n: the number para
 *
 * Return: last value to be return
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if ( last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}
