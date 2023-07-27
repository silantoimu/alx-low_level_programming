#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* Calculate the length of the destination string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Concatenate the source string to the destination string */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	/* Null-terminate the resulting string */
	dest[dest_len + i] = '\0';

	return (dest);
}

