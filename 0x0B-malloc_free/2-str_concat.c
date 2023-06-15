#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - concatenates two strings
 *@s1: string to be concatenated
 *@s2: string to be concatenated
 *Return: a pointer to the new string. Null, if str = NULL
*/

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int length1;
	unsigned int length2;
	unsigned int x;
	unsigned int y;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	length1 = strlen(s1);
	length2 = strlen(s2);

	concat_str = malloc(sizeof(char) * (length1 + length2 + 1));

	if (concat_str == NULL)
	{
		concat_str = NULL;
		return (NULL);
	}

	for (x = 0; x < length1; x++)
	{
		concat_str[x] = s1[x];
	}
	for (y = 0; y < length2; y++)
	{
		concat_str[length1 + y] = s2[y];
	}

	concat_str[length1 + length2] = '\0';
	return (concat_str);
}
