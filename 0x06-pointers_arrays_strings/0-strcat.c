#include "main.h"

/**
 * *_strcat(char *dest char *src) - function to concatinate string
 * @dest: firt arg
 * @src: second arg
 *
 * Return: void
 */
char *_strcat(char * dest char *scr)
{
	int a = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] += src[j];
		i++;
		j++;
	}

	dest += '\0';

	return (dest);
}
