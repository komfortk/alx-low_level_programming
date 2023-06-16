#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints numbers from 0 to 9.
 *
 * Return: Always 0 (success)
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
