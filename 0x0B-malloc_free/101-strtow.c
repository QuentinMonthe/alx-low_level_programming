#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_length - the function calculate the length of string
 * @str: string parameter
 *
 * Return: length of string.
 */

int str_length(char *str)
{
	if (*str == 32 || *str == '\0')
		return (0);

	return (1 + str_length(str + 1));
}

/**
 * num_word - the function calculate the number of words in string
 * @str: string parameter
 *
 * Return: number of words.
 */

int num_word(char *str)
{
	int i = 0, size = 0;

	while (str[i] != '\0')
	{
		if (i > 0 && str[i] == 32 && str[i - 1] != 32)
		{
			size++;
		} else if (str[i] != 32 && str[i + 1] == '\0')
		{
			size++;
		}
		i++;
	}

	return (size);
}

/**
 * strtow - the function splits a string into words
 * @str: double point of character
 *
 * Return: pointer to string (success) or NULL if not.
 */

char **strtow(char *str)
{
	char **words = NULL;
	int len, k, i = 0, j = 0, size = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	size = num_word(str);
	words = (char **) malloc(sizeof(char *) * (size + 1));
	if (words == NULL || size == 0)
		return (NULL);
	for (k = 0; k <= size; k++)
		words[k] = NULL;

	while (str[j] != '\0')
	{
		if (str[j] != 32)
		{
			len = str_length(str + j);
			words[i] = (char *) malloc(sizeof(char) * (len + 1));
			if (words[i] == NULL)
			{
				for (k = 0; k < i; k++)
					free(words[k]);
				free(words);

				return (NULL);
			}

			for (k = 0; k < len; k++)
			{
				words[i][k] = str[j + k];
			}
			words[i][len] = '\0';
			i++;
			j = j + len;
		} else
			j++;
	}

	return (words);
}
