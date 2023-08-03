#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a givem index
 * @n: the number
 * @index: index of the bit to be retrieved
 *
 * Return: value of the bit at given index, or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_out;

	if (index > 63)
		return (-1);

	bit_out = (n >> index) & 1;

	return (bit_out);
}
