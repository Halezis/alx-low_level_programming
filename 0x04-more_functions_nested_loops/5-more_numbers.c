#include "main.h"

/**
 *more_numbers - Prints numbers 0 to 14 ten times
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			if (y > 9)
			{
				_putchar('0' + (y / 10));
			}
			_putchar('0' + (y % 10));
		}
		_putchar('\n');
	}
}
