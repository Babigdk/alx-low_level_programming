#include <unistd.h>

/**
 * _putchar - writes the character
 * @c: The character
 *
 * Return: 1
 * on error, -1 is returned, and error is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
