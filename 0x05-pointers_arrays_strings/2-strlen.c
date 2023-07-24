/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string (number of characters excluding '\0').
 */
int _strlen(char *s)
{
	int length = 0;

	/* Iterate through the string until the null terminator '\0' is found. */
	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

