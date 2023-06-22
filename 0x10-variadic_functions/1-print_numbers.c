#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: number of parameters
 * @separator: the string to be printed between numbers
 * Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print_num;
	unsigned int x;

	va_start(print_num, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(print_num, int));
		if (separator != NULL && x != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print_num);
}
