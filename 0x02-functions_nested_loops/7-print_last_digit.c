#include "main.h"

/**
  *print_last_digit - Print the last digit of a number
  *@n: accepts number inputs
  *Return: Value of the last digit
  */

int print_last_digit(int n)
{
	int x = _abs(n) % 10;

	_putchar ('0' + x);
	return (x);
}
