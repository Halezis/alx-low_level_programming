#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_calloc - allocates memory for an array, using malloc
 *@min: minimum
 *@max: maximum number
 *Return: a pointer to the allocated memory
*/

int *array_range(int min, int max)
{
	int x;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (x = min; x <= max; x++)
	{
		arr[x] = x;
	}

	return (arr);
}
