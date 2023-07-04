#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main -  a program that multiplies two positive numbers.
  *@argc: the number of command line arguments
  *@argv: an array of strings
  *Return: Always zero
  */

int main(int argc, char *argv[])
{
	int x;
	int y;
	char *err = "Error";
	unsigned int mul;

	if (argc != 3)
	{
		for (y = 0; err[y] != '\0'; y++)
		{
			_putchar(err[y]);
		}
		_putchar('\n');
		exit(98);
	}

	mul = 1;
	for (x = 1; x < argc; x++)
	{
		if (atoi(argv[x]))
		{
			mul = mul * atoi(argv[x]);
		}
		else
		{
			for (y = 0; err[y] != '\0'; y++)
			{
				_putchar(err[y]);
			}
			_putchar('\n');
			exit(98);
		}
	}
	printf("%d", mul);
	return (0);
}