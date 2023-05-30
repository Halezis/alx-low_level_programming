#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *@s: Accepts the string to be printed
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int length;
	int x;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}

	for (x = length - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}

	_putchar('\n');
}
