#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_calloc - allocates memory for an array, using malloc
 *@nmemb: number of elements of an array
 *@size: amount in bytes
 *Return: a pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < nmemb; x++)
	{
		arr[x] = 0;
	}

	return (arr);
}
