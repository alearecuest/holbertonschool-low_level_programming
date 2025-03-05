#include "main.h"
#include <math.h>

/**
 * _sqrt_helper - helper function to find the square root.
 * @n: the number to calculate the square root.
 * @x: the current value to test as the square root.
 *
 * Return: the natural square root of n, or -1 if n
 * does not have a natural square root
 */
int _sqrt_helper(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (_sqrt_helper(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to calculate the square root.
 *
 * Return: the natural square root of n, or -1 if n
 * does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
