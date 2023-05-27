#include "main.h"

/**
*print_triangle - check the code
*@size: Takes size of the triangle
*Return: Always 0.
 */

void print_triangle(int size)
{
	int x;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			int y;

			for (y = 1; y <= size - x; y++)
			{
				_putchar(' ');
			}

			for (y = 1; y <= x; y++)
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
