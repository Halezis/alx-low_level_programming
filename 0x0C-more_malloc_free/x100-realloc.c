#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_realloc - eallocates a memory block using malloc and free
 *@new_size: new size, in bytes of the new memory block
 *@old_size: size, in bytes, of the allocated space for ptr
 *@ptr: pointer to the memory previously allocated
 *Return: a pointer to the allocated memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int ptr_re;
	unsigned int copy_size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	ptr_re = malloc(new_size);

	if (ptr_re == NULL)
	{
		return (NULL);
	}

	copy_size = old_size;
	if (new_size < old_size)
	{
		copy_size = new_size;
	}

	memcpy(ptr_re, ptr, copy_size);

	if (new_size > old_size)
	{
		memset(ptr_re + old_size, 0, new_size - old_size);
	}

	free(ptr);

	return (ptr_re);
}
