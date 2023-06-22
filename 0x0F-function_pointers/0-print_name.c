#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @f: pointer to a function
 * @name: name to be printed
 * A pointer to a function that accepts a char input
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
