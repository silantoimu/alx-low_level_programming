#include "main.h"
#include  <stdio.h>

/**
 * set_char_pointer - Sets the value of a pointer to a char.
 * @ptr: Pointer to a char pointer to be set.
 * @value: Char value to set the pointer to.
 *
 * Return: None (void function).
 */
void set_char_pointer(char **ptr, char value)
{
	if (ptr == NULL)
		return;

	*ptr = &value;
}

