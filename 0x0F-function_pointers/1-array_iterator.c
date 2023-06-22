#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a fcn based param of an array
 * @array: an array
 * @size: size of the array
 * @action: A pointer to a function that accepts int input
 * Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
