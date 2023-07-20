#include <stdio.h>

/**
 * is_prime - Checks if a number is prime.
 * @num: The number to check.
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime(long num)
{
        long i;

        if (num < 2)
                return (0);

        for (i = 2; i * i <= num; i++)
        {
                if (num % i == 0)
                        return (0);
        }

        return (1);
}

/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 * @num: The number to find the largest prime factor for.
 * Return: The largest prime factor.
 */
long largest_prime_factor(long num)
{
        long i;
        long largest = 0;

        for (i = 2; i * i <= num; i++)
        {
                if (num % i == 0 && is_prime(i))
                        largest = i;
        }

        if (largest == 0)
                return (num);

        return (largest);
}

/**
 * main - Entry point for the program.
 * Return: Always 0 (Success)
 */
int main(void)
{
        long number = 612852475143;
        long largest_prime = largest_prime_factor(number);

        printf("%ld\n", largest_prime);

        return (0);
}


