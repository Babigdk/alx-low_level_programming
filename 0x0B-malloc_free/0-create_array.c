#include <stdlib.h>
#include "main.h"

/**
 * create_array - arrays of character
 * @size: the size
 * @c: initialise
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (!size)
	{
		return (NULL);
	}
	array = (char *) malloc(sizeof(char) * size);

	if (array)
	{
		while (size > 0)
			array[--size] = c;
	}
	return (array);
}
