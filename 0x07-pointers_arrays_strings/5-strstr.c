#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: the string to be searched
 * @needle: substring to be checked
 * Return: pointer to beginning of located string, if found
 * NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return ('\0');
}
