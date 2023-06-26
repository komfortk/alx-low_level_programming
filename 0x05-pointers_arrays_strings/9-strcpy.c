#include "main.h"
/**
 * *strcpy - function that copies the string pointed by src
 * Description: copies it to the buffer pointed to by dest
 * including terminating null byte
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
