#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX standard output.
 * @filename: file to br read from
 * @letters: number of letters it should read and print
 * Return: Number of letters read & print. 0 if error.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wr;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd < 0)
		return (0);

	wr = write(fd, filename, letters);
	if (wr < 0)
	{
		return (0);
	}

	return (wr);
}
