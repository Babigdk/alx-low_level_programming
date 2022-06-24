#include "main.h"

/**
 * _islower - function that check for lowercase
 * @c: the check character
 *
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
