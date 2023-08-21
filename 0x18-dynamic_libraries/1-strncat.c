#include "main.h"

/**
 *_strncat - check
 *@dest: The destination string to be copied to
 *@src: The string to be copied
 *@n: number of characters to concat
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int d_length;
	int s_length;
	int x;
	char *p_dest;

	d_length = 0;
	s_length = 0;
	p_dest = dest;

	while (dest[d_length] != '\0')
	{
		d_length++;
	}
	while (src[s_length] != '\0')
	{
		s_length++;
	}

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[d_length + x] = src[x];
	}

	if (x < n)
	{
		dest[d_length + x] = '\0';
	}

	return (p_dest);
}
