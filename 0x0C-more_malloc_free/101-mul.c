#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit_string - Checks if a string consists of only digits
 * @str: The string to be checked
 *
 * Return: 1 if the string consists of digits, 0 otherwise
 */

int is_digit_string(char *str)
{
	while (*str)
	{
	if (*str < '0' || *str > '9')
	return (0);
	str++;
	}
	return (1);
}
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, 98 on incorrect arguments
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	printf("Error\n");
	return (98);
	}

	if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
	{
	printf("Error\n");
	return (98);
	}

	unsigned long long num1 = strtoull(argv[1], NULL, 10);
	unsigned long long num2 = strtoull(argv[2], NULL, 10);
	unsigned long long result = num1 * num2;

	printf("%llu\n", result);

	return (0);
}

