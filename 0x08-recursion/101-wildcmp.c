#include "main.h"
/**
 * wildcmp - function to compare two string
 * @s1: string to compare
 * @s2: string with wild character
 * Return: 1
 */
int wildcmp(char *s1, char *s2)
{
	char *last_sc = 0;
	char *last_s1_sc = 0;
	return (full_compare(s1, s2, last_sc, last_s1_sc));
}
/**
 * full_compare - function to work with recursion
 * @s1: fisrt
 * @s2: second
 * @last_sc: last pos in s2 
 * @last_s1_sc: pos in string s1
 * Return: 1
 */
int full_compare(char *s1, char *s2, char *last_sc, char *last_s1_sc)
{
	int sc = 0;

	if (*s2 == '*')
	{
		sc = 1;
		if (!find_next_c(&s2, s2))
			return (1);
		last_sc = s2;
		last_s1_sc = s1;
	}

	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (1 * full_compare(s1 + 1, s2 + 1, last_sc, last_s1_sc));
	}
	if (sc || (*(s2 - 1) == '*'))
	{
		if (!find_after_sc(&s1, s1, *s2))
			return (0);
		return (1 * full_compare(s1 + 1, s2 + 1, last_sc, last_s1_sc));
	}

	if (last_sc && *s2 != '\0')
	{
		s2 = last_sc;
		s1 = last_s1_sc + 1;
		full_compare(s1, s2, last_sc, last_s1_sc);
		return (1);
	}
	return (0);
}
/**
 * find_next_c - function ro find next char different than s2
 * @s2: address of pointer s2
 * @as2: auxiliar pointer to update s2
 * Return: 1
 */
int find_next_c(char **s2, char *as2)
{
	if (*as2 == '\0')
		return (0);
	if (*as2 != '*')
	{
		*s2 = as2;
		return (1);
	}
	if (find_next_c(s2, as2 + 1) == 0)
		return (0);
	return (1);
}
/**
 * find_after_sc - finding next character in s1 matching in s2 address
 * @s1: address of pointer used to update s1 
 * @as1: auxiliar pointer to update s1 address
 * @s2: char to match within s1
 *
 * Return: 1
 */
int find_after_sc(char **s1, char *as1, char s2)
{
	if (*as1 == '\0')
		return (0);
	if (*as1 == s2)
	{
		*s1 = as1;
		return (1);
	}
	if (find_after_sc(s1, as1 + 1, s2) == 0)
		return (0);
	return (1);
}
	
