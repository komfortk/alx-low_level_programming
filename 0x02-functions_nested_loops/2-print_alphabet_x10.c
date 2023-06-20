#include "main.h"
/**
 * print_alphabet_x10 - Print the alphabet x10 in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	}
	_putchar('\n');
	i++;
}
