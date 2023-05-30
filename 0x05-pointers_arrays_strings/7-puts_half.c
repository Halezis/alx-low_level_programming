#include "main.h"

/**
 * puts_half -  Prints the second half of a string
 *@str: The string whose halff is printed
 * Return: Always 0.
 */


void puts_half(char *str)
{
	int length;
	int x;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (x = length / 2; x < length; x++)
		{
			_putchar(str[x]);
		}
	}
	else
	{
		for (x = ((length - 1) / 2); x < length; x++)
		{
			_putchar(str[x]);
		}
	}

	_putchar('\n');
}
