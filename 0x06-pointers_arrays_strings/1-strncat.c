#include "main.h"

/**
 * _strcat - function atmost
 * @dest: fisrt
 * @src: second
 * @n: third
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
