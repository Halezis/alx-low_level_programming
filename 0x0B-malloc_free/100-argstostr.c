#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *argstostr - oncatenates all the arguments of your program.
 *@ac: the number of arguments
 *@av: array of pointer to string of arguments
 *Return: a pointer to the new string. Null, if str = NULL
*/

char *argstostr(int ac, char **av)
{
	int x;
	int y;
	int size;
	char *new_str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	size = 0;
	if (ac > 0)
	{
		for (x = 0; x < ac; x++)
		{
			size = size + strlen(av[x]);
		}
	}
	new_str = malloc(sizeof(char) * (size + 1));

	if (new_str != NULL)
	{
		for (y = 0; y < size; y++)
		{
			new_str = av[y];
		}
	}
}