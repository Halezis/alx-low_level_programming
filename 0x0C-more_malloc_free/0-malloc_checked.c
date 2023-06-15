#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory to be allocated
 * Return: A pointer to the memory allocated
 * 			status value 98, if malloc fails
*/

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(*ptr) * b);
	if (ptr == NULL)
	{
		exit (98);
	}
	return (ptr);
}