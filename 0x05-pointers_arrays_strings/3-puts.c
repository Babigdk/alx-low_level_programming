#include "main.h"

/**
 * _puts - function with one args of type char
 * @str: one char type argument
 *
 * Description: print a string follow by a new line to stdout
 * Return: none
 */
void _puts(char *str)
{
	while(*str > 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
