#include <stdio.h>
#include <stdlib.h>

/**
 * main - main point
 * @argc: int type
 * @argv: char type
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int j = 1;
	int k;
	int mult = 1;

	if (argc > 2)
	{
		mult = atoi(argv[i]) * atoi(argv[i + 1]);
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
