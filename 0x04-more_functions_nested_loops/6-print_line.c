#include "main.h"

/**
 *print_line - check the code
 *@n: character
 *Return: Always 0.
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
