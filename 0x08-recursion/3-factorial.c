#include "main.h"
/**
 * factorial - recursive
 * @n: numbers
 * Return: int
 */
int factorial(int n)
{
	if (n <= 0)
		return (1);
	return (n * factorial(n - 1));
}
