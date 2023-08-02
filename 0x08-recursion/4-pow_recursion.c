#include "main.h"
/**
 * _pow_recursion - Returns value of x raised to power of y using recursion.
 * @x: The base value.
 * @y: The exponent value.
 *
 * Return: result of x raised to power of y or -1 if y is less than 0 (err).
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

