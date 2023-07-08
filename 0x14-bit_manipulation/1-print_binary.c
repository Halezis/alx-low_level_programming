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

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (x = 0; x < bit; x++)
	{
		if ((n & mask) != 0)
			_putchar('1');
		else
			_putchar('0');
		mask = mask >> 1;
	}
}
