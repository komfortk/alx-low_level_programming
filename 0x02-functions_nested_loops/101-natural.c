#include <stdio.h>
/**
 * main - Lists all the natural numbers
 *
 * Description: Multiples of 3 and 5 exclusive of 1024
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}

