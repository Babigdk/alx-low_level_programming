#include "main.h"

/**
 * rev_string - a function to reverse a string
 * @s: string to reserve
 *
 * Return: void
 */
void rev_string(char *s)
{
	int start, tmp;
	int end = 0;

	while (*(s + end) != '\0')
	{
		end++;
	}

	end -= 1;
	start = 0;
	while (end > start)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
}
