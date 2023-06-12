#include "main.h"
#include <stdio.h>

/**
  *main - a program that prints its name, followed by a new line
  *@argc: the number of command line arguments
  *@argv: an array of strings
  *Return: Always zero
  */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
