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
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
