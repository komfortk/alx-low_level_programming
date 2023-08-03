#include "main.h"
/**
 * puts_half - Prints half of a string
 * Description: followed by a new line
 * @str: pointer to a string
 * Return: void
 */
void puts_half(char *str)
{
	int fullstr = 0;
	int halfstr = 0;

	while (str[fullstr] != '\0')
		fullstr++;

	halfstr = fullstr / 2;

	if (fullstr % 2 != 0)
		halfstr += 1;

	while (str[halfstr] != '\0')
	{
		_putchar(str[halfstr]);
		halfstr++;
	}
	_putchar('\n');
}
