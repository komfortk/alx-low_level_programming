#include "main.h"

/**
 * actual_sqrt_recursion - recurses helper function to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator to check guesses
 *
 * Return: the resulting square root of n
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);

	return (actual_sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The square root of n, or -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (actual_sqrt_recursion(n, 0));
}

