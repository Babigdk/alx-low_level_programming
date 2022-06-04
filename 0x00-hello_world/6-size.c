#include <stdio.h>

/**
 * main - Entry point
 *
<<<<<<< HEAD
 * Return: Always 0 (sucess)
=======
 * Return: Always 0 (success)
>>>>>>> 2d02ebdeca4509c9a7d0c60df60f2eab08c7bd65
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
<<<<<<< HEAD
	printf("size of a long long: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
{
=======
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
>>>>>>> 2d02ebdeca4509c9a7d0c60df60f2eab08c7bd65
