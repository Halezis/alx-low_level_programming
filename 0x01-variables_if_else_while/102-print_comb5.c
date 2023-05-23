#include <stdio.h>

/**
  *main - Print combinations of two two-digits
  *
  *Return: Always 0
  */

int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 98; x++)
	{
		int x1 = x / 10;
		int x2 = x % 10;

		for (y = x + 1; y <= 99; y++)
		{
			int y1 = y / 10;
			int y2 = y % 10;

			putchar('0' + x1);
			putchar('0' + x2);
			putchar(' ');
			putchar('0' + y1);
			putchar('0' + y2);
			if (x != 98 || y != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
