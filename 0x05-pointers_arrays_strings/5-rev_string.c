#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to a string
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int begin = 0;
	int end;

	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	while (begin < end)
	{
		char temp = s[begin];

		s[begin] = s[end];
		s[end] = temp;

		begin++;
		end--;
	}
}
