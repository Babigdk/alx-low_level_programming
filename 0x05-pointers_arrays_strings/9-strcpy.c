#include "main.h"

/**
 * *_strcpy - function with two args of char type
 * @dest: first arg
 * @src: second args
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
