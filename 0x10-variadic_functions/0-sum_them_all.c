#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  the sum of all its parameters.
 * @n: number of parameters
 * @...: variable numbers to be summed
 * Return: sum of all parameters. 0, if n = 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int x;
	int sum;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}

	else
	{
		va_start(add, n);
		for (x = 0; x < n; x++)
		{
			sum += va_arg(add, int);
		}
	}
	va_end(add);
	return (sum);
}
