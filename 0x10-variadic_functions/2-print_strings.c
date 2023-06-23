#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @n: number of parameters
 * @separator: the string to be printed between numbers
 * Return: Nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print_str;
	unsigned int x;
	const char *str;

	va_start(print_str, n);
	for (x = 0; x < n; x++)
	{
		str = va_arg(print_str, const char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && x != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print_str);
}