#include "main.h"

/**
 * is_prime_number - a function that returns 1 if the input integer is a prime number, otherwise return 0
 *@n: A number
 * Return: 1 if n is prime. 0 if not.
 */

int prime_helper(int num, int factor)
{
	if (factor >= num)
	{
		return (1);
	}

	if ((num % factor) == 0)
	{
		return (0);
	}

	return (prime_helper(num, factor + 1));
}

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (prime_helper(n, 2));
}
