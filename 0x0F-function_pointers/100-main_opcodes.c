#include <stdio.h>
#include <stdlib.h>

/**
 * opcodes_print - Prints the opcodes of its own main function
 * @conv_bytes: Number of bytes to print
 *Return: nothing
 */
void opcodes_print(int conv_bytes)
{
	unsigned char *ptr = (unsigned char *)opcodes_print;
	int x;
	for (x = 0; x < conv_bytes; x++)
	{
		printf("%02x ", *(ptr + x));
	}
	printf("\n");
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, 1 for incorrect argc, 2 for neg bytes
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit (1);
	}

	int conv_bytes = atoi(argv[1]);

	if (conv_bytes < 0)
	{
		printf("Error\n");
		exit (2);
	}

	opcodes_print(conv_bytes);
	return (0);
}
