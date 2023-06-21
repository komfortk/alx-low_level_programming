#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Description: Starts with 1 and 2, prints in comma-separated format
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned int fib1 = 1, fib2 = 2, sum;

	printf("%u, %u", fib1, fib2);
	for (count = 3; count <= 98; count++)
	{
		sum = fib1 + fib2;
		printf(", %u", sum);
		fib1 = fib2;
		fib2 = sum;
	}
	printf("\n");
	return (0);
}
