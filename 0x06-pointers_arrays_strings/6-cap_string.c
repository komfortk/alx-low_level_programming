#include "main.h"
/**
 * *cap_string - function that capitalizes all words of a string
 * @k: the string to be capitalized
 *
 * Return: pointer to the changed string
 */
char *cap_string(char *k)
{
	int i = 0;

	if (k[i] >= 97 && k[i] <= 122)
	{
		k[i] -= 32;
	}
	while (k[i] != '\0')
	{
		if (k[i] == ' ' ||
			k[i] == '\t' ||
			k[i] == '\n' ||
			k[i] == ',' ||
			k[i] == ';' ||
			k[i] == '.' ||
			k[i] == '!' ||
			k[i] == '?' ||
			k[i] == '"' ||
			k[i] == '(' ||
			k[i] == ')' ||
			k[i] == '{' ||
			k[i] == '}')
		{
			while (k[i + 1] == ' ')
				i++;
			if (k[i + 1] >= 97 && k[i + 1] <= 122)
			{
				k[i + 1] -= 32;
			}
			i++;
		}
	}
	return (k);
}
