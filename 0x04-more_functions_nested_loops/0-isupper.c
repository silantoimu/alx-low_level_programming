#include "main.h"

/**
 * _isupper - checks if a letter is uppercase
 * @x: The number to be checked
 * Return: 1 for an uppercase letter, 0 for any other character
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

