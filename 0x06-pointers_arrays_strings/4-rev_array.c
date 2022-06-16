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
	int i = 0, t;

	n = n - 1;
	while (i < n)
	{
		t = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = t;
		i++;
		n--;
	}
}
