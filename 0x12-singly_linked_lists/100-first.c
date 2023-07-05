#include <stdio.h>

/**
 * print_intro - Prints the introductory message.
 */

void print_intro(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * pre_main - Function attribute to execute before main.
 */
void __attribute__((constructor)) pre_main(void)
{
	print_intro();
}
