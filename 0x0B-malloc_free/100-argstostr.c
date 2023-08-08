#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: On success, returns a pointer to the concatenated string.
 *         On failure, returns NULL.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j, total_length = 0, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate total length of concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++; /* Add 1 for '\n' after each argument */
	}

	concatenated = malloc(sizeof(char) * (total_length + 1));
	if (concatenated == NULL)
		return (NULL);

	/* Concatenate the arguments with '\n' between them */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[index] = av[i][j];
			index++;
		}
		concatenated[index] = '\n';
		index++;
	}
	concatenated[index] = '\0';

	return (concatenated);
}

