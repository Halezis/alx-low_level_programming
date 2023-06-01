#include "main.h"

/**
 *_strncpy - A function that copies a string
 *@dest: The destination string to be copied to
 *@src: The character to be copied
 *@n: The number of characters to be copied
 *Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	if (x < n)
	{
		dest[x] = '\0';
	}

	return (dest);
}
