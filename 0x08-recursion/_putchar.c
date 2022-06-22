#include <unistd.h>
/**
 * _putchar - write to stdout
 * @c: string
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
