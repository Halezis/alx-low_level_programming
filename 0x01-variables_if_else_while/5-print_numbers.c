#include <stdio.h>

/**
  *main - print single numbers of base 10
  *
  *Return: Always 0
  */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}

	putchar('\n');
	return (0);
}
