#include "main.h"

/**
 * is_prime_helper - helper function to check for prime number.
 * @n: number to check.
 * @x: current divisor to check.
 *
 * Return: 1 if n is prime number, 0 if otherwise
 */
int is_prime_helper(int n, int x)
{
	if (x * x > n)
		return (1);
	if (n % x == 0)
		return (0);
	return (is_prime_helper(n, x + 1));
}

/**
 * is_prime_number - cheks if a number is a prime number.
 * @n: number to check.
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}
