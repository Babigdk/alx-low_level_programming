#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - print a random number and states wheather
 * it is a positive, nenative or zero.
 *
 * Return: Always 0 (sucess)
 */
/* main - print negative or positive values or zero */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf(" %d is positive\n", n);
	else if (n == 0)
		printf(" %d is zero\n", n);
	else
		printf(" %d is negative\n", n);
	return (0);
}
