#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - locate the first occurence in the string s of
 * the bytes in the string
 * @s: input
 * @accept: substring
 *
 * Return: 1
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
