#include "main.h"
/**
 * swap_int - function that swaps the value of two integers
 * @a: integer to swap
 * @b: integer to swap
 * Return: value of swapped integers
 */
void swap_int(int *a, int *b)
{
	int k = *a;
	*a = *b;
	*b = k;
}
