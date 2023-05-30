#include "main.h"
#include <stdio.h>

/**
 *print_array - Print  elements of an array
 *@a: The arraywhose elements are to be printd
 *@n: The number of elements to be printed
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
