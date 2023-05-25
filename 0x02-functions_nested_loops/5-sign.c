#include "main.h"

/**
  *print_sign - returns the sign of a number
  *@n: accepts numbers
  *Return: 0, 1 and _1 depending on input numbr
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0' + 0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
