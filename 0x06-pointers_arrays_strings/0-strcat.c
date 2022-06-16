#include "main.h"

/**
 * *_strcat(char *dest char *src) - function to concatinate string
 * @dest: firt arg
 * @src: second arg
 *
 * Return: Always 0
 */
char *_strcat(char * dest, char *scr)
{
	int a = 0;
	int b = 0;


	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;

	while (src[b] != '\0')
	{
		dest[a] += src[b];
		a++;
		b++;
	}


	return (dest);
}
