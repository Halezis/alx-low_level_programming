#include "main.h"

/**
  *print_numbers - Print numbers 0 to 9
  *
  *Return: Always 0
  */

void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar('0' + x);
	}
	_putchar('\n');
}
