#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the program prints the last digit of a randomly generated number
 *
 * Return: Alwways 0(success)
 */

int main(void)
{
	int n;
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;

	if (p > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, p);
	} else if (p == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, p);
	} else if (p < 0 && p != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 6\n", n, p);
	}
	return (0);
}
