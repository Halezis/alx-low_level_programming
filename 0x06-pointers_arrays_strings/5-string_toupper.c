#include "main.h"

/**
 * *string_toupper - Change all lowercase letters to uppercase
 *@str: the string to is changed to uppercase
 * Return: uppercase string
 */

char *string_toupper(char *str)
{
	int x;
	char *ptr;

	ptr = str;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] - 32;
		}
	}

	return (ptr);
}
