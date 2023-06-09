#include "main.h"

/**
 *pali_helper - helper function
 * @s: pointer to the string to be checked
 *@index: index
 *@length: string length
 * Return: 1 if string is a palindrone. 0 if not
 */

int pali_helper(char *s, int index, int length)
{
	if (index >= length)
	{
		return (1);
	}
	if (s[index] != s[length])
	{
		return (0);
	}

	return (pali_helper(s, index + 1, length - 1));
}

/**
 *_strlen_recursion - string length function
 * @s: pointer to the string to be checked
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - a function that checks for a palindrone
 * @s: pointer to the string to be checked
 * Return: 1 if string is a palindrone. 0 if not
 */

int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);
	if (*s == '\0')
	{
		return (0);
	}
	if (*s == ' ')
	{
		return (1);
	}

	return (pali_helper(s, 0, length - 1));
}
