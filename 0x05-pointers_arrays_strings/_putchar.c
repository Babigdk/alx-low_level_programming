#include <unistd.h>

/**
 * _putchar - write the character to stdout
 * @c: The character to print
 *
 * Return: on success 1
 * on erro -1 is required, and error is set approprietely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
