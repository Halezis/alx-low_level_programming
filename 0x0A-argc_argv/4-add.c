#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main - a program that adds positive numbers.
  *@argc: the number of command line arguments
  *@argv: an array of strings
  *Return: Always zero
  */

int main(int argc, char *argv[])
{
	int result;
	int x;

	result = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (x = 1; x < argc; x++)
		{
			if (atoi(argv[x]))
			{
				result = result + atoi(argv[x]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}

		printf("%d\n", result);
	}

	return (0);
}
