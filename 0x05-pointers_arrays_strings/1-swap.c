#include "main.h"

/**
 * swap_int - function with two int type argument
 * @a: first argument of type int
 * @b: second int type
 *
 * Description: Using pointer to change value of a and b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
