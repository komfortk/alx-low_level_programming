#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *endian_ptr = (char *)&k;

	return (*endian_ptr);
}
