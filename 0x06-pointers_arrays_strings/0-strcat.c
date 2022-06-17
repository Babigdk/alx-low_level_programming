#include "main.h"

/**
 * _strcat - a function to concatenate 2 strings
 *
 * @dest: firt arg
 *
 * @src: second arg
 *
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != 0)
		ptr++;
	while (*src != 0)
		*ptr++ = *src++;
	*ptr = 0;

	return (dest);
}
