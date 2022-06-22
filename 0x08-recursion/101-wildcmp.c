#include "main.h"
/**
 * test1 - search for proper match
 * @s5: compare
 * @s6: wildcard match
 * @t5: first spot to check
 * @t66: first spot in wildcart
 * Return: 1
 */
char *test1(char *s5, char *s6, char *t5, char *t6)
{
	if (*s6 == '*' || (*s5 == '\0' && *s6 == '\0'))
		return (t5);
	else if (*s5 != *s6)
		return (wildcard(s5, t6));
	else
		return (test1(s5 + 1, s6 + 1, t5, t6));
}
/**
 * wildcard - checker
 * @s3: string1
 * @s4: strin1
 * Return: pointera
 */
char *wildcard(char *s3, char *s4)
{
	if (*s3 != *s4)
		if (*s3 == '\0')
			return (0);
		return (wildcard(s3 + 1, s4));
	return (test1(s3 + 1, s4 + 1, s3, s4));
}
/**
 *
 * wildcmp - compare function
 * @s1: first
 * @s2: second
 * Return: 1
 */
int wildcmp(char *s1, char *s2)
{
	char *p;

	if (*s1 == '*' && *(s2 + 1) == '\0')
		return (1);
	else if (*s2 == '*' && *(s2 + 1) == '*')
		return (wildcmp(s1, s2 + 1));
	else if (*s2 == '*')
		p = wildcard(s1, s2 + 1);
		if (p == 0)
			return (0);
		return (wildcmp(p + 1, s2 + 2));
	else if (*s1 != *s2)
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (wildcmp(s1 + 1, s2 + 1));
}
