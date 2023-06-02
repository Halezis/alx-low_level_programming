#include "main.h"
#include <stdio.h>

/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nnothing
 */

void reverse_array(int *a, int n)
{
	int x;
	int temp;

	for (x = 0; x < (n / 2); x++)
	{
		temp = a[x];
		a[x] = a[n - 1 - x];
		a[n - x] = temp;
	}
}
