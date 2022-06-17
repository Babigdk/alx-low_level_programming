#include "main.h"

/**
 * reverse_array - reverse array element
 *
 * @a: integer array
 * @n: number of array elem of type int
 *
 * Return: void
 */
void reserve_array(int *a, int n)
{
	int tmp;
	int *ptr = a;

	while (&a[n--] > ptr)
	{
		tmp = *ptr;
		*ptr = a[n];
		a[n] = tmp;
		ptr++;
	}
}
