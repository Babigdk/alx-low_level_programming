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
	int i = 0;

	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	return (dest);
}
