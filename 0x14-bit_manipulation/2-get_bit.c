#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to be searched
 * @index: index of the bit to be retrieved, from 0
 *
 * Return: the value of the bit at given index, or -1 if an error met
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
