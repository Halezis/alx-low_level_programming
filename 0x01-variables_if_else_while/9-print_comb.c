#include <stdio.h>

/**
  *main - print single digit numbers, followed by a space
  *
  *Return: Always 0
  */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar('0' + x);
		if (x < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
