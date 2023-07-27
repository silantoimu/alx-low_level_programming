#include "main.h"
/**
 * _strncat - Concatenate two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to be concatenated from src.
 *
 * Return: Pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
	dest_ptr++;
	}

	while (*src != '\0')
	{
	*dest_ptr = *src;
	dest_ptr++;
	src++;
	}

	*dest_ptr = '\0';

		return (dest);
}

