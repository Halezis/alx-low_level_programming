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
	if (new_size > old_size)
	{
		exit(98);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		
	}
}
