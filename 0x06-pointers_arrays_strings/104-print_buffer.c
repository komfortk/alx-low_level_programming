#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints buffer
 * @b: buffer pointer
 * @size: size of buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int t, s, i;

	t = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (t < size)
	{
		s = size - t < 10 ? size - t : 10;
		printf("%08x: ", t);
		for (i = 0; i < 10; i++)
		{
			if (i < s)
				printf("%02x", *(b + t + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < s; i++)
		{
			int c = *(b + t + i);

			if (c < 32 || c > 126)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		t += 10;
	}
}

