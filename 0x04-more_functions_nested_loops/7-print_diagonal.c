#include "main.h"

/**
 *print_diagonal - check the code
 *@n: Takes value for number of times
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			int y;

			for (y = 1; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}

	_putchar('\n');
}
