#include <stdio.h>
#include "main.h"

/**
  *print_to_98 - Print numbers to 98
  *@n: Accepts an integer
  *Return: Always 0
  */

void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (x = n; x >= 9; x--)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
	}

	printf("\n");
}
