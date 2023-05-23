#include <stdio.h>

/**
  *main - main tentry
  *
  *Return: Always 0
  */

int main(void)
{
	int x;

	for (x = 0; x <= 99; x++)
	{
		putchar('0' + x);
		putchar(',');
		putchar(' ');
	}

	return (0);
}
