#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *@n: The number whose square root is returned
 * Return: The square root of n. -1 if has no natural square root.
 */

int _sqrt_helper(int num, int root)
{
	if ((root * root) > num)
	{
		return (-1);
	}
	else if ((root * root) == num)
	{
		return (root);
	}

	return (_sqrt_helper(num, root + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_helper(n, 0));
}

