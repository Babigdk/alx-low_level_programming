#include "main.h"

/**
 * print_rev - function with 1 args
 * @s: first char type
 *
 * Description: print a string in reverse
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i -= 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
