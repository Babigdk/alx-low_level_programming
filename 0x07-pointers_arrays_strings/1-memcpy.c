#include "main.h"
/**
 * _memcpy - copies memory data
 * @dest: buffer to be copied to
 * @src: buffer to be copy from
 * @n: number of byte to be copy
 *
 * Return: 1
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
