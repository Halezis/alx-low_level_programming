#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: name to be printed
 * A pointer to a function that accepts a char input
*/

void print_name(char *name, void (*f)(char *))
{
	void (*f_ptr)(char *);
	f_ptr = f;
	f_ptr(name);
}
