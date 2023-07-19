#include <stdio.h>

/**
 * main - finds and prints the sum of even-valued Fibonacci terms
 *        up to 4,000,000
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	long fib1 = 1, fib2 = 2, fib_sum = 0, even_sum = 0;

	while (fib_sum <= 4000000)
	{
		fib_sum = fib1 + fib2;

		if (fib_sum % 2 == 0)
			even_sum += fib_sum;

		fib1 = fib2;
		fib2 = fib_sum;
	}

	printf("%ld\n", even_sum);

	return 0;
}

