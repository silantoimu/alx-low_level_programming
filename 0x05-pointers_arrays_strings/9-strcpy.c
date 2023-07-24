/**
 * _strcpy - Copies the string pointed by src to buffer pointed to dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copy the characters from src to dest, including the null terminator. */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0'; /* Add the null terminator end of  destination string.*/

	return (dest);
}

