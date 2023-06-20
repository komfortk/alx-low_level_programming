#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be checked
 * Return: last digit value of number
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;

	if (m < 0)
	{
		m = -m;
		_putchar('0' + m);
	}
	return (m);
}
