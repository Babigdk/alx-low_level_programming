#include "main.h"
/**
 * _strdup - creationg new array containing a copy of a given string
 * @str: pointer
 * Retuen: null
 */
char *_strdup(char *str)
{
	char *dupc;
	unsigned int size = 0;

	if (str)
	{
		while (str[size++])
			;
		dupc = malloc(sizeof(char) * size);
		if (dupc)
		{
			while (size--)
				dupc[size] = str[size];
			return (dupc);
		}
	}
	return (NULL);
}
