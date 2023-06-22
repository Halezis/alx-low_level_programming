#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for and returns an integer
 * @array: an array
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of first element. -1, if not found
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
		{
			return (x);
		}
	}
	return (-1);
}
