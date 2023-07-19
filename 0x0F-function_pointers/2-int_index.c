#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: pointer to the integer
 * @size: number of elements in the array
 * @cmp: function pointer to the comparison function
 *
 * Return: -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
