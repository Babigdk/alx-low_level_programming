#include "main.h"
/**
 * palin1 - length of number
 * @a: string 
 * @l: lenght
 * Return: 1
 */
in palin1(char *a, int l)
{
	if (*a == 0)
		return (l -1);
	return (palin1(a + 1, l + 1));
}
/**
 * palin2 - compare strings
 * @a: string
 * @l: lenght
 * Return: 1
 */
int palin2(char *a, int l)
{
	if (*a != *(a + 1))
		return (0);
	else if (*a == 0)
		return (1);
	return (palin2(a + 1, l - 2));
}
/**
 * is_palindrome - checker
 * @s: string
 * Return: 1
 */
int is_palindrome(char *s)
{
	int l;

	l = palin1(s, 0);
	return (palin2(s, l));
}
