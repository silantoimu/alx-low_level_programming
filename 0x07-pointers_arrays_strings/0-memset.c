#include "main.h"
#include <stdio.h>

/**
 * _memset - Fill first n bytes of the memory area pointed by s constant byte b
 * @s: Pointer to the memory area to be filled
 * @b: The constant byte to be filled in the memory area
 * @n: The number of bytes to be filled with the constant byte
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

