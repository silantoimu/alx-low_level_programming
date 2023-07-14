#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int ld; /* last digit */

	srand(time(0)); /* Seed the random number generator */
	n = rand();

	ld = n % 10;

	printf("Last digit of %d is %d and is ", n, ld);

	if (ld > 5)
		printf("greater than 5\n");
	else if (ld == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");

	return (0);
}


