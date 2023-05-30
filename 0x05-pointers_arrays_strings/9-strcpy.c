#include "main.h"

/**
 *_strcpy - check the code
 *@dest: The buffer where the string is to be copied to
*@src: Pointer to the string to be copied
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	char *p_dest;

	p_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (p_dest);
}

