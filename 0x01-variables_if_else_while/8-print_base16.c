#include <stdio.h>

/**
  *main - print hexadecimal numbers
  *
  *Return: Always 0
  */

int main(void)
{
	int x;

	for (x = 0; x <= 15; x++)
	{
		if (x < 10)
		{
			putchar('0' + x);
		}
		else
		{
			putchar('a' + (x - 10));
		}
	}

	putchar('\n');
	return (0);
}
