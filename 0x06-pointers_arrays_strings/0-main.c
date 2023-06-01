#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("s1 is: %s\n", s1);
    printf("s2 is: %s", s2);
    ptr = _strcat(s1, s2);
    printf("s1 after conc is: %s\n", s1);
    printf("s2 after conc is %s\n", s2);
    printf("ptr is: %s\n", ptr);
    return (0);
}
