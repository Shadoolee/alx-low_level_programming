#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to standard output.
 * @filename: The name of the file to be read.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters read and printed.
 *         If the file cannot be opened or read, return 0.
 *         If filename is NULL, return 0.
 *         If write fails/not write the expected amount of bytes,return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
