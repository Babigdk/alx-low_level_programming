#include "main.h"
/**
 * prime1 - evaluator
 * @a: number n
 * @b: iterator
 *
 * Return: 1
 */
int prime1(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime1(a, b + 1));
}
/**
 * is_prime_number - check is prime
 * @n: inpu n
 * Return: 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime1(n, 2));
}
