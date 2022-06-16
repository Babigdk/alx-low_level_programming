#include "main.h"
/**
 * string_toupper - converts character to upper
 * @a: string to convert
 *
 * Return: void
 */
char *string_toupper(char *a)
{
	char *ptr = a;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
		ptr++;
	}
	return (a);
}
