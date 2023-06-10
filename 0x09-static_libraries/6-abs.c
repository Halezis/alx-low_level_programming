#include "main.h"

/**
  *_abs - computes the absolute value of an integer
  *@n: variable to accept inputs
  *Return: The absolute values
  */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n + (-2 * n));
	}
}
