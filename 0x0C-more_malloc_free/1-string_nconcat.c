3include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: Pointer to the newly allocated concatenated string,
 *         or NULL if allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	unsigned int s1_len = 0;
	unsigned int s2_len = 0;

	while (s1[s1_len])
		s1_len++;

	while (s2[s2_len])
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	char *result = (char *)malloc(sizeof(char) * (s1_len + n + 1));

	if (result == NULL)
		return (NULL);

	for (unsigned int i = 0; i < s1_len; i++)
		result[i] = s1[i];

	for (unsigned int i = 0; i < n; i++)
		result[s1_len + i] = s2[i];

	result[s1_len + n] = '\0';

	return (result);
}

