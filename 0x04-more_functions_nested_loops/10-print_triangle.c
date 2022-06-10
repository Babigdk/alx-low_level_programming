#include "main.h"

/**
 * print_triangle - Entry point
 *
 * Description: print triangle
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int row, hashs, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hashs = 1; hashs <= row; hashs++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
