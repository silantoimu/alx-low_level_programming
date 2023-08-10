#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 * If malloc fails, the function terminates the process with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
	perror("malloc_checked");
	exit(98);
	}

	return (ptr);
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int size = 10;
	int *arr;

	arr = malloc_checked(size * sizeof(int));

	/* Use the allocated memory */

	free(arr); /* Don't forget to free the memory when done! */

	return (0);
}

