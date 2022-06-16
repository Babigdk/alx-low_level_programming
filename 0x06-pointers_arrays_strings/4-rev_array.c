#include "main.h"

/**
 * reverse_array - reverse array element
 * @a: ist arg
 * @n: length
 *
 * Return: void
 */
void reserve_array(int *a, int n)
{
	int *p, i, aux, k;

	*p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
