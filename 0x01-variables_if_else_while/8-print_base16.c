#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		for (low = 'a'; low <= 'f'; low++)
		{
			putchar(low);
		}
	}
	return (0);
}