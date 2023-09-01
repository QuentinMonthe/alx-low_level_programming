#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * _strncat - This function concatenates two strings.
 * @dest: pointer destination of string
 * @src: pointer source of string
 * @n: number bytes from src
 *
 * Return: Nothing
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	if (n == 0 || src == NULL)
	{
		return (dest);
	}

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) = src[j];
		if (src[j] == '\0')
		{
			break;
		}
		i++;
		j++;
	}

	return (dest);
}
