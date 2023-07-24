#include <stdio.h>

/**
 * puts2 - Prints other character  string, starting with first character.
 * @str: Pointer to the string to be printed.
 */
void puts2(char *str)
{
	int i = 0;

	/* Iterate through the string and print every other character. */
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}

	putchar('\n');
}

