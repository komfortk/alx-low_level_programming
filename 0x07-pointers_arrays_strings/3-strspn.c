#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to be searched
 * @accept: string where character is compared
 * Return: number of bytes in s
 * consists of bytes only from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				b++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (b);
		}
		s++;
	}
	return (b);
}
