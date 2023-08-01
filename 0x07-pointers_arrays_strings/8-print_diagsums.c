#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The 2D array representing the square matrix.
 * @size: The size of the square matrix.
 *
 * Return: None (void function).
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_main_diag = 0;
	int sum_secondary_diag = 0;

	if (a == NULL || size <= 0)
		return;

	/* Calculate the sum of the main diagonal and secondary diagonal */
	for (i = 0; i < size; i++)
	{
		sum_main_diag += a[i * size + i];
		sum_secondary_diag += a[i * size + (size - 1 - i)];
	}

	/* Print the sum of the diagonals */
	printf("Sum of the main diagonal = %d\n", sum_main_diag);
	printf("Sum of the secondary diagonal = %d\n", sum_secondary_diag);
}

