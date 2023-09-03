#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * _strchr - This function locates character in a string.
 * @s: pointer to string
 * @c: chqrqcter to search
 *
 * Return: point to the first occurence of 'c' or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return ((s + i));
		}
		i++;
	}

	if (*(s + i) == c)
	{
		return ((s + i));
	}

	return (NULL);
}
