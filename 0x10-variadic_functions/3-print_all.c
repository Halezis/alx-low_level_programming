#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function
 * Return: Nothing
*/

void print_all(const char * const format, ...)
{
	va_list print_args;
	int x;
	const char *sep;
	const char *str;

	va_start(print_args, format);
	x = 0;
	sep = "";

	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
			printf("%s%c", sep, (char)va_arg(print_args, int));
			break;

			case 'i':
			printf("%s%d", sep, va_arg(print_args, int));
			break;

			case 'f':
			printf("%s%f", sep, va_arg(print_args, double));
			break;

			case 's':
			str = va_arg(print_args, const char *);
			if(!str)
			{
				str = "(nil)";
			}
			printf("%s%s", sep, str);
			break;

			default:
			x++;
			continue;
		}
		sep = ", ";
		x++;
	}
	printf("\n");
	va_end(print_args);
}
