#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string carrying binary number
 *
 * Return: the converted number, 0 if there is invalid input or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_v = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		dec_v = 2 * dec_v + (b[i] - '0');
	}

	return (dec_v);
}
