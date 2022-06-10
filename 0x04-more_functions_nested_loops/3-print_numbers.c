#include "main.h"

/**
 * print_numbers - entry point
 *
 * Description: prints the numbers with _putchar 2 only
 *
 * Return: void
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
