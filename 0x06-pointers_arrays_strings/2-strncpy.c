#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * _strncpy - This function concatenates two strings.
 * @dest: pointer destination of string
 * @src: pointer source of string
 * @n: number bytes from src
 *
 * Return: Nothing
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (n == 0 || src == NULL)
	{
		return (dest);
	}

	while (i < n && src[i] != '\0')
	{
		*(dest + i) = src[i];
		i++;
	}

	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);
}
