#include "main.h"

/**
  *_islower - chcks for lowercase character
  *@c: accepts characters
  *Return: 1 if lowercase, 0 if not
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
