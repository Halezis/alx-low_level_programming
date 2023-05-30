#include "main.h"

/**
 *puts2 - print even index characters of a string
 *@str: The string to be printed
 * Return: Always 0.
 */

void puts2(char *str)
{
	int length;
	int x;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	for (x = 0; x < length; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
