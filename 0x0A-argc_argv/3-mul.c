#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main -  a program that multiplies two numbers.
  *@argc: the number of command line arguments
  *@argv: an array of strings
  *Return: Always zero
  */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return (0);
}
