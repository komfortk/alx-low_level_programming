#include "main.h"
/**
 * _isupper - Checks for uppercase charcater
 * @c: The character to be checked
 * Return: 1 for uppercase or 0 for any other
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
