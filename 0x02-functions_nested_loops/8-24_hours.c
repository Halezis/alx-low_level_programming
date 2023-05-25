#include "main.h"

/**
  *jack_bauer - prints every minute of the day
  *
  *Return: Always 0;
  */

void jack_bauer(void)
{
	int x;
	int y;

	for (x = 0; x <= 23; x++)
	{
		int x1 = x / 10;
		int x2 = x % 10;

		for (y = 0; y < 60; y++)
		{
			int y1 = y / 10;
			int y2 = y % 10;

			_putchar('0' + x1);
			_putchar('0' + x2);
			_putchar(':');
			_putchar('0' + y1);
			_putchar('0' + y2);
			_putchar(' ');
			_putchar('\n');
		}
	}

}
