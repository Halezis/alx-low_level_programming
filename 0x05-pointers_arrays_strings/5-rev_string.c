#include "main.h"

/**
 * rev_string - a function that reverses a string
 *@s: the string to be reversed
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int length;
	int x;
	int prev;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	for (x = 0; x < length / 2; x++)
	{
		prev = s[x];
		s[x] = s[length - 1 - x];
		s[length - 1 - x] = prev;
	}
}
