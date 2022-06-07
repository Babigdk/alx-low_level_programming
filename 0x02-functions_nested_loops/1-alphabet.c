#include "main.h"
#include <unistd.h>

/**
 * main - print alphabet in lowercase
 *
 */
void print_alphabet(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
	{
		_putchar(lett);
	}
	_putchar('\n');
}
