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
	ssize_t _read, _write;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	_read = read(fd, buf, letters);

	if (_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	_write = write(STDERR_FILENO, buf, letters);

	if (_write == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	close(fd);
	return (_read);
}
