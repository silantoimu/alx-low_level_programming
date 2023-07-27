#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The input string to convert to uppercase.
 *
 * Return: A pointer to the resulting string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* Convert lowercase letter to uppercase */
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}

	return (str);
}

