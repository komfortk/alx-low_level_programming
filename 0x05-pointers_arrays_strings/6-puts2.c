#include "main.h"
/**
 * puts2 - Prints characters of a string
 * Description: Starts with the first character
 * @str: pointer to a string
 * Return: void
 */
void puts2(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
		z++;
	}
	_putchar('\n');
}
