#include "main.h"
/**
 * print_number - Prints an integer
 * @n: Character to be checked
 */
void print_number(int n)
{
	unsigned int e = n;

	if (n < 0)
	{
		_putchar('-');
		e = -e;
	}
	if (n / 10 != 0)
	{
		print_number(e / 10);
	}
	_putchar('0' + (e % 10));
}
