#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	int sqrt(int n, int i);

	if (n < 0)
		return (-1);
	return (sqrt(n, 1));
}

/**
 * sqrt - helper function to find the square root.
 * @n: the number to calculate the square root of
 * @i: the current value to test as the square root
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt(n, i + 1));
}
