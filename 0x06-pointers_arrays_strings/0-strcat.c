#include "main.h"

/**
 * _strcat - function to concatinate string
 * @dest: firt arg
 * @src: second arg
 *
 * Return: Always 0
 */
char *_strcat(char * dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}


	return (dest);
}
