#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: pointer to a string
 * Return: length of string
 */
int _strlen(char *s)
{
	int string_length = 0;

	while (*s != '\0')
	{
		string_length++;
		s++;
	}
	return (string_length);
}
