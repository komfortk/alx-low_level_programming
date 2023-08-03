#include "main.h"

/**
 * flip_bits - function that returns number of bits you would need to flip
 *             to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int num = 0;
	unsigned long int current;
	unsigned long int x_or = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = x_or >> i;

		if (current & 1)
			num++;
	}

	return (num);
}
