#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

char *allocate_buffer(char *file);
void close_file_descriptor(int fd);

/**
 * allocate_buffer - allocates bytes for a buffer
 * @file: name of buffer file storing chars
 *
 * Return: pointer to the newly-allocated buffer
 */
char *allocate_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file_descriptor - closes file descriptors
 * @fd: file descriptor to be closed
 */
void close_file_descriptor(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another file
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 *
 * Description: if the argument count is incorrect - exit code 97
 *              if file_from does not exist or cannot be read - exit code 98
 *              if file_to cannot be created or written to - exit code 99
 *              if file_to or file_from cannot be closed - exit code 100
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, _r, _w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = allocate_buffer(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	_r = read(fd_from, buffer, 1024);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fd_from == -1 || _r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		_w = write(fd_to, buffer, _r);
		if (fd_to == -1 || _w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		_r = read(fd_from, buffer, 1024);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (_r > 0);

	free(buffer);
	close_file_descriptor(fd_from);
	close_file_descriptor(fd_to);

	return (0);
}
