#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to name of file to create
 * @text_content: pointer to string to write to file
 *
 * Return: 1 on succes, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, _write, length = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	_write = write(fd, text_content, length);

	if (fd == -1 || _write == -1)
		return (-1);

	close(fd);

	return (1);
}
