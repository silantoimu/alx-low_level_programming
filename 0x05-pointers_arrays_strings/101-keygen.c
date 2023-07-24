#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PASSWORD_LENGTH 20

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The integer converted from the string. If no valid integer is found,
 *         the function returns 0.
 */


	char random_char() {
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int index = rand() % (sizeof(charset) - 1);
	return (charset[index]);
}

	/* Function to generate a random password */
	void generate_password(int length) {
	int i;
	for (i = 0; i < length; i++) {
	putchar(random_char());
	}
	putchar('\n');
}

		int main() {
	srand(time(NULL)); /* Seed the random number generator with current time */

	int password_length = rand() % MAX_PASSWORD_LENGTH + 8; /* Random password length between 8 and 27 */

	printf("Generated Password: ");
	generate_password(password_length);

	return (0);
}

