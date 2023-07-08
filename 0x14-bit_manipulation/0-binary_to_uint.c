#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number. Or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int x = 0;

	if (b == NULL)
		return (0);

	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);

		result = result << 1;
		result |= (b[x] - '0');

		x++;
	}
	return (result);
}
