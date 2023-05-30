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
	char *ptr = s;

	length = 0;
	while (*ptr != '\0')
	{
		length++;
		ptr++;
	}

	for (x = length - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}

	_putchar('\n');
}
