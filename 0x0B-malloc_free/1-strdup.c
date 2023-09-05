#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_length - the function calculate the length of string
 * @str: string parameter
 *
 * Return: length of string.
 */

unsigned int str_length(char *str)
{
	if (*str == '\0')
		return (0);

	return (1 + str_length(str + 1));
}

/**
 * _strdup - the function copies of the string
 * @str: array to copy
 *
 * Return: pointer to array (success) or NULL if not.
 */

char *_strdup(char *str)
{
	char *arr;
	unsigned int i, size;

	if (str == NULL)
	{
		return (NULL);
	}

	size = str_length(str) + 1;
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(arr + i) = *(str + i);
	}

	return (arr);
}
