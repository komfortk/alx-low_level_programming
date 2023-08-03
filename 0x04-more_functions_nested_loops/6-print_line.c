#include "main.h"
/**
 * print_line - Draws straight line
 * @n: The number of line drawn
 */
void print_line(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < n; m++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
