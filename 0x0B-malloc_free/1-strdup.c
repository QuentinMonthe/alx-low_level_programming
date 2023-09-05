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
	unsigned int len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * _strdup - the function copies of the string
 * @str: array to copy
 *
 * Return: pointer to array (success) or NULL if not.
 */

char *_strdup(char *str)
{
	char *arr = NULL;
	unsigned int i, size = str_length(str);

	if (size == 0)
	{
		return (NULL);
	}

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
