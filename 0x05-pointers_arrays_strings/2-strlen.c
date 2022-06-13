#include "main.h"

/**
 * _strlen - function with one args
 * @s: char type pointer
 *
 * Description: strlen similiar function to return lenght
 * Return: string
 */
int _strlen(char *s)
{
	int i;
	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
