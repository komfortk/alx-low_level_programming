#include "main.h"
/**
 * times_table - Prints the 9 times table
 * Return: empty
 */
void times_table(void)
{
	int m, n, o, d, e;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			o = m * n;

			if (o > 9)
			{
				d = o % 10;
				e = (o - d) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(e + '0');
				_putchar(d + '0');
			}
			else
			{
				if (n != 0)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
			_putchar(o + '0');
			}
		}
		_putchar('\n');
	}
}
