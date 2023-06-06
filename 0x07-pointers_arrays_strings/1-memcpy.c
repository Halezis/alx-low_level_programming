#include "main.h"

/**
 * _memcpy -  copies n bytes from memory area src to memory area dest
 * @n: bytes to be copied from memory area
 * @src: source memory area
 * @dest: destination memory area
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(dest + x) = src[x];
	}

	return (dest);
}