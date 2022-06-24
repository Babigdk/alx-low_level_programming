#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: ponter to a memory
 * @b: byte to be fill
 * @n: number of byte
 *
 * Return: 1
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
