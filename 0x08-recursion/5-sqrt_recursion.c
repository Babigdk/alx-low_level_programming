#include "main.h"
/**
 * _sqrt_recursion - function to return natural root of number
 * @n: square of n
 * Return: int
 */
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
int _sqrt_recursion(int n)
{
	return (sqrt1(n, 1));
}
