#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it
 *                 to the POSIX standard output
 * @filename: text file being read
 * @letters: number of letters to be read
 *
 * Return: number of letters it could read and print
 *         0 when function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t r;
	ssize_t w;

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
	free(buf);
	close(fd);

	if (w == -1 || w != r)
		return (0);

	return (w);
}
