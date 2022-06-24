#include "main.h"

/**
 * _strstr - locate the substring
 * @haystack: string to be check
 * @neddle: string to locate
 *
 * Return: 1
 */
char *_strstr(char *haystack, char *neddle)
{
	int i;

	if(*needle == '\0')
		return (haystack);

	for (i = 0; *(haystack + 1) != '\0'; i++)
	{
		if (*(haystack + i) == *needle)
		{
			char *ptr = _strstr(haystack + i + 1, needle + 1);
			return (ptr)? ptr - 1 : NULL);
		}
	}
	return (NULL);
}
