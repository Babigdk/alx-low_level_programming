#include "main.h"

/**
 * sqrt1 - evaluate from 1 to n
 * @a: n input of main function
 * @b: iteratetor
 * Return: 1
 */
int sqrt1(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt1(a, b + 1));
}
/**
 * _sqrt_recursion - returns natural square root
 * @n: input number
 * Return: 1 on success
 */
int _sqrt_recursion(int n)
{
	return (sqrt1(n, 1));
}
