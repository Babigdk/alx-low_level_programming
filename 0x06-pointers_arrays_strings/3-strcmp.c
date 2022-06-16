#include "main.h"

/**
 * _strcmp - function to compare two string
 * @s1: fisrt arg
 * @s2: second
 *
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;
	return (*(s1 + 1) - *(s2 + i));
}
