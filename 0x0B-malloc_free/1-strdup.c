#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - return the len
 * @s: char
 * Return: void
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	return (a);
}

/**
 * *_strdup - creationg new array containing a copy of a given string
 * @str: pointer
 * Retuen: null
 */
char *_strdup(char *str)
{
	char *ptr;
	int size;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	ptr = malloc(size * sizeof(char));

	x = 0;
	while (x < size)
	{
		if (ptr == NULL)
		{
			return (NULL);
	}
		ptr[x] = str[x];
		x++;
	}
	return (ptr);
}
