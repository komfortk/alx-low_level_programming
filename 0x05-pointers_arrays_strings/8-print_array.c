#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * Description: followed by a new line
 * @a: array name
 * @n: number of elemets of array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int p;

	if (a != NULL)
	{
		for (p = 0; p < n; p++)
		{
			printf("%d", a[p]);

			if (p != n - 1)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
