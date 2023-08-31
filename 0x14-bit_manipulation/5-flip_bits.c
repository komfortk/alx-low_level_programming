#include "main.h"

/**
 * flip_bits - function that counts number of bits you would need to flip
 *             to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, count = 0;
	unsigned long int xor = n ^ m;
	unsigned long int current;

	for (k = 63; k >= 0; k--)
	{
		current = xor >> k;

		if (current & 1)
			count++;
	}

	return (count);
}
