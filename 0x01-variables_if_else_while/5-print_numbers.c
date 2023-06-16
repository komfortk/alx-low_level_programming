#include <stdio.h>
/**
 * main - Prints numbers from 0 to 9.
 * followed by a new line
 * Result: Always 0 (success)
 */
int main(void)
{
	int num;

	while (num < 10)
	{
		printf("%d", num);
		num += 1;
	}
	printf("\n");
	return (0);
}
