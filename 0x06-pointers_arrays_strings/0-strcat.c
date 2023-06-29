#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: destination string pointer
 * @src: source string pointer
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
