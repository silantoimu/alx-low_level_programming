#include  "main.h"
#include <stddef.h>

/**
 * _strchr - Locate the first occurrence of a character in a string.
 * @s: The string to search.
 * @c: The character to find.
 *
 * Return: A pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	return (s); /* Return the pointer to the first occurrence of c */
	s++;
	}

	/* If c is not found, return NULL */
	return (NULL);
}

