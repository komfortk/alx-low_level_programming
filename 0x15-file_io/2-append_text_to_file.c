#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: a NULL terminating string to add at the end of the file
 *
 * Return: 1 0n success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, count = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, count);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
