#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be checked
 * Return: last digit value of number
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;

	if (a < 0)
	{
		a = a * -1;
	}
	_putchar(a + '0');
	return (a);
}
