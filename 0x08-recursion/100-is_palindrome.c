#include "main.h"
/**
 * palin1 - length of number
 * @a: string
 * Return: 1
 */
int palin1(char *a)
{
	if (*a == '\0')
		return (0);
	return (1 + palin1(a + 1));
}
/**
 * palin2 - compare strings
 * @r: string
 * @p: p
 * @l: lenght
 * Return: 1
 */
int palin2(int l, int r, char *p)
{
	if (l >= r)
		return (1);
	else if (p[l] != p[r])
		return (0);
	return (palin2(l + 1, r - 1, p));
}
/**
 * is_palindrome - checker
 * @s: string
 * Return: 1
 */
int is_palindrome(char *s)
{
	int i;

	i = palin1(s) - 1;
	return (palin2(0, i, s));
}
