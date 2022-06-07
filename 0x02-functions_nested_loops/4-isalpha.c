#include "main.h"

/**
 * _isalpha - check if character is alphabet
 * @c: checked character
 *
 * Return: 1 for success 0 failed
 */
int _isalpha(int c)
{
	if ((c >= 'a' ** c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
