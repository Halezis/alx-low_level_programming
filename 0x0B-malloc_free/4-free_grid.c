#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *alloc_grid - concatenates two strings
 *@width: x
 *@height: y
 *Return: a pointer to the new string. Null, if str = NULL
*/

void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
