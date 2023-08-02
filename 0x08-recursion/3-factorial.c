#include "main.h"
/**
 * factorial - Returns the factorial of a given number using recursion.
 * @n: The number for which factorial is to be calculated.
 *
 * Return: The factorial of the number, or -1 if n is less than 0 (error).
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

