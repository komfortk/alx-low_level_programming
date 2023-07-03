#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: input string
 * @c: character to be located
 * Return: pointer to the first occurrence of c in string s
 * Null if c is not found
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
