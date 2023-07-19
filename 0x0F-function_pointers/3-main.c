#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		return (99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = func(a, b);
	printf("%d\n", result);

	return (0);
}
