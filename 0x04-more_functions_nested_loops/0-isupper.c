#include "main.h"

/**
  *_isupper -  Checks for uppercase characters
  *@c: parameter
  *Return: 1 and 0, dpending on if uppercase
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
