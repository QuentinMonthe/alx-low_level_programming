#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * string_toupper - This function changes all lowercase letters
 * of a string to uppercas
 * @str: string to change case
 *
 * Return: String in uppercase
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
