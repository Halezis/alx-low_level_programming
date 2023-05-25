#include "main.h"

/**
  *print_last_digit - Print the last digit of a number
  *@n: accepts number inputs
  *Return: Value of the last digit
  */

int print_last_digit(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n % 10);
	}
}
