#include "main.h"

/**
  *_isalpha - Print alphanumeric characters
  *@c: accepts characters
  *Return: 1 if alphabetic, 0 if not
  */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}

	return (0);
}
