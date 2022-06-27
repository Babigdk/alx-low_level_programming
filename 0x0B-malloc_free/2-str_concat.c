#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - len
 * @s: input
 * Return: void
 */
int _strlen(char *s)
{
	int a;
	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}
/**
 * _strcat - function to concatinate string with n byte
 * @dest: destionation
 * @src: source
 * @n: int of size
 * Return: coid
 */
char *_strncat(char *dest, char *src, int m)
{
	int dest_len, a;
	dest_len = _strlen(dest);
	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[dest_len + a] = src[a];
	return (dest);
}
