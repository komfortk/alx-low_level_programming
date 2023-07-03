#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory copied to
 * @src: memory copied from
 * @n: number of bytes from memory area
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; n > 0; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
