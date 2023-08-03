#include "main.h"
/**
 * *_strncpy - function that copies a string
 * @dest: the destination string pointer
 * @src: the source string pointer
 * @n: number of bytes to be used
 * Return: the pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	for (; k < n; k++)
	{
		dest[k] = '\0';
	}
	return (dest);
}
