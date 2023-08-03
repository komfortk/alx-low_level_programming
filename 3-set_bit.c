#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at given index
 * @n: pointer to number to be changed
 * @index: index of bit to be set
 *
 * Return: 1 if it worked, or -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}
