#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search.
 * @needle: The substring to find.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	if (haystack == NULL || needle == NULL)
		return (NULL);

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0') /* Found the substring */
			return (haystack);

		haystack++;
	}

	return (NULL); /* Substring not found */
}

