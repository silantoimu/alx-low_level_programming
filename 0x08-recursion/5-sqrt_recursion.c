#include "main.h"
/**
 * _sqrt_recursion - Returns  natural square root of a number using recursion.
 * @n: The number for which the square root is to be calculated.
 *
 * Return: natural square root number,  -1 if there's no natural square root.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Recursive helper function to find square root of a number.
 * @n: The number for which the square root is to be calculated.
 * @i: The current guess for the square root.
 *
 * Return: natural square root number, -1 if there's no natural square root.
 */
int sqrt_helper(int n, int i)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (sqrt_helper(n, i + 1));
}

