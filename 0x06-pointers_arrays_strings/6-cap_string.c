#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * cap_string - This function capitalizes all words of a string
 * @str: string to change case
 *
 * Return: String in uppercase
 */

char *cap_string(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return (str);
	}

	while (str[i] != '\0')
	{
		if (i == 0 && (str[i + 1] > 96 && str[i + 1] < 123))
		{
			str[i + 1] = str[i + 1] - 32;
			i += 2;
		}

		if (str[i] == 32 || str[i] == '\t' || str[i] == '\n'
				|| str[i] == ',' || str[i] == ';' || str[i] == '.'
				|| str[i] == '!' || str[i] == '?' || str[i] == 34
				|| str[i] == '(' || str[i] == ')' || str[i] == '{'
				|| str[i] == '}')
		{
			if (str[i + 1] > 96 && str[i + 1] < 123)
			{
				str[i + 1] = str[i + 1] - 32;
				i += 2;
			} else
				i++;
		} else
			i++;
	}

	return (str);
}
