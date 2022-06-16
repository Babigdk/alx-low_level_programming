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
	int result[500];
	int i;
	n--;

	for (i = 0; i <= n; i++)
		result[i] = a[i];
	for (i = 0; i < n; i++)
		a[i] = result[n - i];

}
