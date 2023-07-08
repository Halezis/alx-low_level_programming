#include "main.h"

/**
 * print_binary - converts a binary number to an unsigned int
 * @n: number whose binary is to be printed
 * Return: nothing
*/

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int bit = sizeof(unsigned long int) * 8;
	int x;
	int leading_zero = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (x = 0; x < bit; x++)
	{
		if ((n & mask) != 0 || !leading_zero)
		{
			_putchar((n & mask) != 0 ? '1' : '0');
			leading_zero = 0;
		}
		mask = mask >> 1;
	}
}
