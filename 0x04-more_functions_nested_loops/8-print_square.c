#include "main.h"

/**
 *print_square - check the code
 *@size: size of the square
 * Return: Always 0.
 */

void print_square(int size)
{
	if (size > 0)
	{
		int x;

		for (x = 1; x <= size; x++)
		{
			int y;

			for (y = 1; y <= size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
