#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *alloc_grid - concatenates two strings
 *@width: x
 *@height: y
 *Return: a pointer to the new string. Null, if str = NULL
*/

int **alloc_grid(int width, int height)
{
	int x;
	int y;
	int z;
	int **new_grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	new_grid = malloc(sizeof(int *) * height);

	if (new_grid != NULL)
	{
		for (x = 0; x < height; x++)
		{
			new_grid[x] = malloc(sizeof(int) * width);

			if (new_grid[x] == NULL)
			{
				for (z = 0; z < x; z++)
				{
					free(new_grid[z]);
				}
				free(new_grid);
				return (NULL);
			}

			for (y = 0; y < width; y++)
			{
				new_grid[x][y] = 0;
			}
		}
	}

	return (new_grid);
}
