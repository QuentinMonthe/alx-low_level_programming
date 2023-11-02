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
 * argstostr - the function concatenates of two strings
 * @ac: integer argument
 * @av: double point of character
 *
 * Return: pointer to string (success) or NULL if not.
 */

char *argstostr(int ac, char **av)
{
	char *str = NULL;
	int i, j, k, size = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		size += str_length(av[i]);
	}
	str = (char *) malloc(sizeof(char) * (size + ac));

	if (str == NULL)
	{
		return (NULL);
	}

	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k] = av[i][j];
			j++;
			k++;
		}
		str[k] = '\n';
		k++;
	}

	return (str);
}
