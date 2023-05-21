#include <stdio.h>

/**
  *main - Print single numbers of base 10
  *
  *Return: Always 0
  */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar('0' + x);
	}

	putchar('\n');
	return (0);
}
