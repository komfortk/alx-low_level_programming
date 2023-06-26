#include "main.h"
/**
 * _atoi - function that converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i, k, n, len, f, dig;

	i = 0;
	k = 0;
	n = 0;
	len = 0;
	f = 0;
	dig = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++k;

		if (s[i] >= 48 && s[i] <= 57)
		{
			dig = s[i] - 48;
			if (k % 2)
				dig = -dig;
			n = n * 10 + dig;
			f = 1;
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

