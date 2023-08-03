#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at given index
 * @n: pointer to number to be changed
 * @index: index of the bit to be cleared
 *
 * Return: 1 (success), -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
