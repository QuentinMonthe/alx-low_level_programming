#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * _strcat - This function concatenates two strings.
 * @dest: pointer destination of string
 * @src: pointer source of string
 *
 * Return: Nothing
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		*(dest + i) = src[j];
		i++;
		j++;
	}
	*(dest + i) = '\0';

	return (dest);
}
