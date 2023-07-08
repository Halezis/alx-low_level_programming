#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to get.
 * Return: bit value at given index or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;
	unsigned long int mask = 1UL << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	bit_val = (n & mask) != 0;

	return (bit_val);
}
