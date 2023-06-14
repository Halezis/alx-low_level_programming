#include "main.h"
#include <stdlib.h>

/**
 *create_array -   creates an array of chars, and initializes with a char
 *@size: size of the memory to allocate
 *@c: the character to be initialized
 *Return: a pointer to the array. Null, if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	arr = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}

	if (arr != NULL)
	{
		for (x = 0; x < size; x++)
		{
			arr[x] = c;
		}
	}
	return (arr);
}
