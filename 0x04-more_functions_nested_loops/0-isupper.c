#include "main.h"

/**
 * _isupper - define if a character is upper
 *
 * Description: print the alphabet
 * @c: value pass
 * Return: int
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
