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
	int i;
	int j;
	int k;
	int mult = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else if (argc == 3)
	{
		for (i = o; i < argc; i++)
		{
			if (i == 1)
			{
				j = atoi(argv[i]);
			}
			else if (i == 2)
			{
				k = atoi(argv[i]);
			}
		}
	mult = j * k;
	printf("%d\n", mult);
	}
	return
}
