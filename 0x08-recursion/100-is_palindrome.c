#include "main.h"
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	len++;

	return (palindrome_helper(s, 0, len - 1));
}

/**
 * palindrome_helper - Recursive helper function check if string:  palindrome.
 * @s: The string to be checked.
 * @start: The starting index of the string.
 * @end: The ending index of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	return (1);

	if (s[start] != s[end])
	return (0);

	return (palindrome_helper(s, start + 1, end - 1));
}

