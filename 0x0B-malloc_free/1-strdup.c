#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - creates a copy of a string
 *@str: string whose duplicate is created
 *Return: a pointer to the new string. Null, if str = NULL
*/

char *_strdup(char const *str)
{
	char *new_str;
	unsigned int length;
	unsigned int x;

	length = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	new_str = malloc(sizeof(char) * length + 1);
	if (new_str != NULL)
	{
		for (x = 0; x < length; x++)
		{
			new_str[x] = str[x];
		}
		new_str[length] = '\0';
	}

	return (new_str);
}
