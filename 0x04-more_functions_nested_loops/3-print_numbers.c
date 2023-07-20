#include "main.h"
#include <unistd.h>

/**
 * print_numbers - Prints numbers from 0 to 9, followed by a new line.
 */
void print_numbers(void)
{
	char  x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}

