#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by new line
 * @s: pointer to a string
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int k;

	while (s[length] != '\0')
	{
		length++;
	}

	for (k = length - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
