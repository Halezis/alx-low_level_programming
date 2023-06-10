#include "main.h"

/**
 * _strchr -  function that locates a character in a string.
 *@s: sring where character is to searched for
 *@c: Character to be searched for
 * Return: Pointer to first occurence, or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != c)
		{
			continue;
		}

		else if (s[x] == c)
		{
			for (y = x; s[y] != '\0'; y++)
			{
				_putchar(s[y]);
			}

			return (s + x);
		}
	}
	return (0);
}