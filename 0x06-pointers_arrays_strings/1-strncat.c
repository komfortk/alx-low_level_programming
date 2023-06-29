#include "main.h"
/**
 * *_strncat - function that concatenates two strings
 * @dest: the destination string pointer
 * @src: the source string pointer
 * @n: number of bytes to be concatenated
 * Return: the pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int k;

	i = 0;
	while (dest[i] != '\0')
		i++;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
