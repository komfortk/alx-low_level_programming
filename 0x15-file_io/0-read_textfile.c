#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it to the
 *                 POSIX standard output
 * @filename: text file
 * @letters: number of letters to be read
 * Return: acrual number of letters read and printed, or 0 if it fails
 *         or filename is NULL, also if cannot be opened or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r;
	ssize_t w;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	close(fd);
	return (r);
}
