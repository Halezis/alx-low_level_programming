#include "main.h"

/**
  *times_table - Print 9 times table
  *
  *Return: Always 0;
  */

void times_table(void)
{
	int x = 0;

	while (x <= 9)
	{
		int y = 0;

		while (y <= 9)
		{
			int z = x * y;
			int z1 = z / 10;
			int z2 = z % 10;

			if (z > 0 && z < 10)
			{
				_putchar(' ');
			}
			else if (z >= 10)
			{
				_putchar('0' + z1);
			}
			else if (x == 0 && y > 0)
			{
				_putchar(' ');
			}
			_putchar('0' + z2);

			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
