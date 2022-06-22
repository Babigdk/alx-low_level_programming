#include "main.h"

/**
 * _puts_recursion - prints string then a new line
 * @: input to string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_put_recursion(s + 1);
}
