#include "main.h"
/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @div: iterator to check divisibility
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int div)
{
	if (div == 1)
		return (1);
	if (n % div == 0 && div > 0)
		return (0);
	return (actual_prime(n, div - 1));
}

/**
 * is_prime_number - checks if a number is prime or not
 * @n: number to check
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
