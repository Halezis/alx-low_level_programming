#include "main.h"
#include <stdio.h>

/**
  *main - a program that prints all arguments it receives.
  *@argc: the number of command line arguments
  *@argv: an array of strings
  *Return: Always zero
  */

int main(int argc, char *argv[])
{
	int x;
	(void)argc;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
