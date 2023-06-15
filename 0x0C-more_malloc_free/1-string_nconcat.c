#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat -  a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2 to be concatenated
 * Return: A pointer to the new memory allocated
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned len1;
	unsigned x;
	unsigned y;
	char *str;

	if (s1 == NULL || s2 == NULL)
	{
		return("");
	}

	len1 = strlen(s1);
	str = malloc(sizeof(char) * (len1 + n + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < len1; x++)
	{
		str[x] = s1[x];
	}

	for (y = 0; y < n; y++)
	{
		str[len1 + y] = s2[y];
	}
	str[len1 + n] = '\0';

	return (str);
}
