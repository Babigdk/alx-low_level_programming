#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: command line count
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int cent[5] = {25, 10, 5, 2, 1};
		int i, count = 0, number = atoi(argv[1]);

		for (i = 0; i < 5; i += 1)
		{
			while (number >= cent[i])
			{
				number -= cent[i];
				count += 1;
			}
		}
	printf("%d\n", count);
	}
	return (0);
}
