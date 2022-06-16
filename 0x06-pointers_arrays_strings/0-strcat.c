#include "main.h"

/**
 * _strcat(char *dest char *src) - function to concatinate string
 * @dest: firt arg
 * @src: second arg
 *
 * Return: Always 0
 */
char *_strcat(char * dest, char *scr)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (*(dest + a))
	{
		a++;
	}

	while (*(dest + a) = *(src + b))
	{
		a++;
		b++;
	}


	return (dest);
}
