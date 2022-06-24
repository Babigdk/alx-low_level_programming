#include <stdio.h>
/**
 * main - main function
 * @argc: first
 * #argv: second para
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	int i;
	while (i < argc)
	{
		i++;
	}
	printf("%d\n", --1);
	return (0);
}
