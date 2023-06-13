#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main - prints the min number of coins to make a change
  *@argc: the number of command line arguments
  *@argv: an array of strings
  *Return: Always zero
  */

int main(int argc, char *argv[])
{
	int cents;
	int coin_count;

	cents = atoi(argv[1]);
	coin_count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		while (cents >= 25)
		{
			cents = cents - 25;
			coin_count = coin_count + 1;
			continue;
		}
		while (cents >= 10)
		{
			cents = cents - 10;
			coin_count = coin_count + 1;
			continue;
		}
		while (cents >= 5)
		{
			cents = cents - 5;
			coin_count = coin_count + 1;
			continue;
		}
		while (cents >= 2)
		{
			cents = cents - 2;
			coin_count = coin_count + 1;
			continue;
		}
		while (cents >= 1)
		{
			cents = cents - 1;
			coin_count = coin_count + 1;
			continue;
		}
	printf("%d\n", coin_count);
	}
	return (0);
}
