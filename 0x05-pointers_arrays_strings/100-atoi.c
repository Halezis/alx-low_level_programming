#include "main.h"
#include <stddef.h>

/**
 *_atoi - Convert strings to integers
 *@s: The string to be converted
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int length;
	int sign;
	int x;
	int str;
	int result;

	if (s == NULL)
	{
		return (0);
	}

	/*Determine length of string*/
	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	/*Skip non-numeric characters*/
	sign = 1;
	for (x = 0; x < length; x++)
	{
		if (s[x] >= '0' && s[x] <= '9')
		{
			break;
		}

		if (s[x] == '-')
		{
			sign *= -1;
		}
	}

	/*Convert the numeric characters to integers*/
	for (; x < length; x++)
	{
		if (s[x] >= '0' && s[x] <= '9')
		{
			/*handle integer overflow*/
			n1 = INT_MAX / 10;
			n2 = INT_MAX % 10;
			n3 = s[x] - '0';
			 if (result > n1 || (result == n1 && n3 > n2))
			 {
				 if (sign == 1)
				 {
					 return (INT_MAX);
				 }
				 else
				 {
					 return (INT_MIN);
				 }
			 }
			str = s[x] - '0';
			result = (result * 10) + str;
		}
	}
	return (result * sign);
}
