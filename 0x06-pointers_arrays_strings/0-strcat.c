#include "main.h"

/**
 *_strcat - check
 *@dest: The destination string to be copied to
 *@src: The string to be copied
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
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

	for (x = 0; x <= s_length; x++)
	{
		dest[d_length + x] = src[x];
	}

	return (p_dest);
}
