#include "main.h"
#include <unistd.h>

/**
 * print_alphabet_x10 - print 10 times alphabet in lower case
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char lett;

	while (n++ <= 9)
	{
		for (lett = 'a'; lett <= 'z'; lett++)
		{
			_putchar(lett);
		}
		_putchar('\n');
	}
}
