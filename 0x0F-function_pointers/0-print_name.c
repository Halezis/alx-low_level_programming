#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @f: pointer to a function
 * @name: name to be printed
 * A pointer to a function that accepts a char input
 * Return: Nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
