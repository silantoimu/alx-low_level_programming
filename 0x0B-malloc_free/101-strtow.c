#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words from.
 *
 * Return: The number of words in the string.
 */

int count_words(char *str)
{
    /* Same as before */
}

char **allocate_word_array(int word_count)
{
	char **words = malloc(sizeof(char *) * (word_count + 1));
	return (words);
}

void free_word_array(char **words, int word_count)
{
	for (int i = 0; i < word_count; i++)
	free(words[i]);
	free(words);
}

void copy_word(char **words, int index, char *src, int start, int end)
{
	int length = end - start;
	words[index] = malloc(sizeof(char) * (length + 1));
	strncpy(words[index], src + start, length);
	words[index][length] = '\0';
}

char **strtow(char *str)
{
	char **words;
	int word_count, i = 0, j = 0, k = 0;

	if (str == NULL || *str == '\0')
	return (NULL);

	word_count = count_words(str);

	words = allocate_word_array(word_count);
	if (words == NULL)
	return (NULL);

	/* Rest of the code (using the helper functions)*/

	return (words);
}

