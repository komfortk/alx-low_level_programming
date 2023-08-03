#include "main.h"
/**
 * *string_toupper - function that changes all lowercase letters to uppercase
 * @k: pointer to string
 * Return: pointer to new value of string
 */
char *string_toupper(char *k)
{
	int i = 0;

	while (k[i] != '\0')
	{
		if (k[i] >= 97 && k[i] <= 122)
		{
			k[i] = k[i] - 32;
		}
		i++;
	}
	return (k);
}
