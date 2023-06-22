#include "main.h"
/**
 * print_most_numbers - Print numbers from 01356789
 * Description: Prints the numbers excluding 2 and 4
 * Return: Result of the numbers
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
