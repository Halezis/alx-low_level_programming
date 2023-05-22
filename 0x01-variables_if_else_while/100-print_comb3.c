#include <stdio.h>

/**
  *main - Print different combinations of two digits
  *
  *Return: Always 0
  */

int main(void)
{
	int x;
	int y;

	for (x = 0; x < 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			putchar('0' + x);
			putchar('0' + y);

			if (x != 8 || y != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
