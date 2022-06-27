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
	int i = argc - 1, j = i - 1, result;

	if (i == 2)
	{
		result = atoi(argv[i]) * atoi(argv[j]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
