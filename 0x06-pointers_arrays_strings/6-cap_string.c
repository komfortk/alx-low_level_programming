#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
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
		while (!(k[i] >= 97 && k[i] <= 122))
			i++;

		if ((k[i - 1] == ' ' ||
			k[i - 1] == '\t' ||
			k[i - 1] == '\n' ||
			k[i - 1] == ',' ||
			k[i - 1] == ';' ||
			k[i - 1] == '.' ||
			k[i - 1] == '!' ||
			k[i - 1] == '?' ||
			k[i - 1] == '"' ||
			k[i - 1] == '(' ||
			k[i - 1] == ')' ||
			k[i - 1] == '{' ||
			k[i - 1] == '}'))
			k[i] -= 32;

		i++;
	}
	return (k);
}
