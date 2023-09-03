#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * _strpbrk - This function searches a string for any of a set of bytes.
 * @s: pointer to string
 * @accept: aphabet segment string
 *
 * Return: pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(accept + j) == *(s + i))
			{
				return ((s + i));
			}
			j++;
		}
		i++;
	}

	return (NULL);
}
