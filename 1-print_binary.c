#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int i;
	int num = 0;
	unsigned long int a;

	for (i = 63; i >= 0; i--)
	{
		a = n >> i;

		if (a & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
