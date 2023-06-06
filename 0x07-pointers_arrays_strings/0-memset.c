#include "main.h"

/**
 * _memset - Fill the first n bytes of memory area with constant byte b
 * @s: The string to be filled
 * @b: constant bytes to be filled with
 * @n: bytes of memory to fill
 * Return: A filled character
*/

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int x;

    for (x = 0; x < n; x++)
    {
        s[x] = b;
    }
    
    return (s);
}