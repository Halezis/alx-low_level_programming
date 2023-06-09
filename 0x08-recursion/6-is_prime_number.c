#include "main.h"

/**
 *prime_helper - a helper function
 *@num: number n
 *@factor: factor of n
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

/**
 * is_prime_number - a function that checks for a prime number
 * @n: A number
 * Return: 1 if n is prime. 0 if not.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (prime_helper(n, 2));
}
