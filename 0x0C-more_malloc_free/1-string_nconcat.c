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
	if (str == NULL || *str == '\0')
		return (0);

	return (1 + str_length(str + 1));
}

/**
 * string_nconcat - the function concatenates of two strings
 * @s1: string
 * @s2: string
 * @n: bytes of s2
 *
 * Return: pointer to string (success) or NULL if not.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, len1, len2;

	len1 = str_length(s1);
	len2 = str_length(s2);
	if (len2 > n)
		len2 = n;

	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		*(str + i) = *(s1 + i);
	}
	for (i = 0; i < len2; i++)
	{
		*(str + len1 + i) = *(s2 + i);
	}
	*(str + len1 + i) = '\0';

	return (str);
}
