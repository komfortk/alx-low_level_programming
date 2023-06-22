#include "main.h"
/**
 * print_diagonal - Draws a diagonal line
 * @n: Number of times diagonal is printed
 */
void print_diagonal(int n)
{
	int y, z;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < n; y++)
		{
			for (z = 0; z < y; z++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
