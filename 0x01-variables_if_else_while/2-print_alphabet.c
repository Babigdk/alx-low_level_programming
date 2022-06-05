#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lett;

	for(lett = 'a'; lett <= 'z'; lett++)
	{
		putchar(lett);

		putchar("\n");
	}

	return (0);
}	
