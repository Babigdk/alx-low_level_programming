#include "main.h"

/**
 * print_most_numbers - entry point
 *
 * Description: numbers with _putchar
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	__putchar('\n');
}
