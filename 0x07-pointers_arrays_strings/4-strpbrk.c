#include "main.h"
/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: string to be searched
 * @accept: string with bytes to be checked
 * Return: pointer to the byte in s that matches the bytes in accept
 * Null if none is found
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}

