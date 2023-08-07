#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to name of file
 * @text_content: NULL terminated string to add at end of file
 *
 * Return: 1 on success, -1 on failure
 *         1 if the file exists, -1 if file does not exist
 *         or no required permissions to write file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, _write, length = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	_write = write(fd, text_content, length);
	if (_write == -1 || _write != length)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
