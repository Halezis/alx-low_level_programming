#include "main.h"

/**
 *_strcmp - compares two strings
 *@s1: string to be compared
 *@s2: string to be compared
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int x;
	int value;

	for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)
	{
		if (s1[x] == s2[x])
		{
			value = 0;
		}
		else
		{
			value = s1[x] - s2[x];
		}
	}

	return (value);
}
