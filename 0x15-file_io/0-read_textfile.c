#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - It reads a text file print to STDOUT.
 *
 * @filename: The name of the text file to be read.
 *
 * @letters: The number of letters it should read and print.
 *
 * Returns: Upon success, the actual number of letters read and printed.
 *	If the file cannot be opened or read, or if there are errors during
 *	reading or writing, return 0. If filename is NULL, return 0.
 *	If write fails or does not write the expected amount of bytes, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_dsp;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_dsp = open(filename, O_RDONLY);
	if (file_dsp == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_dsp);
		return (0);
	}

	lenr = read(file_dsp, buffer, letters);
	close(file_dsp);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}

	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);

	if (lenr != lenw)
		return (0);
	return (lenw);
}
