#include <stdio.h>

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end;

	/* Calculate the length of the string. */
	while (s[length] != '\0')
		length++;

	end = length - 1;

	/* Swap characters from both ends until the middle is reached. */
	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		/* Add a blank line here as per the Betty coding style. */
		s[end] = temp;
		start++;
		end--;
	}
}

