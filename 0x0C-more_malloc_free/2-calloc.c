#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and sets memory to zero
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: A pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < total_size; i++)
	*((char *)ptr + i) = 0;

	return (ptr);
}

