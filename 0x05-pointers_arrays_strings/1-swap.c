#include "main.h"

/**
 * swap_int - swap the values of two integers
 *@a: Accepts value
 *@b:Accepts value
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
