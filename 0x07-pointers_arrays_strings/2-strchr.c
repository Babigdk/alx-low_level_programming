#include "main.h"
#include <stdio.h>
/**
 * _strchr - search char in a string
 * @s: string to be check
 * @c: char to be located
 * Return: 1
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (!c)
	{
		return (s);
	}
	return (NULL);
}
