#include "main.h"
#include <stdlib.h>

/**
 * *_strcpy - This function copies the string.
 * @dest: pointer to put string copy (string)
 * @src: pointer of the string value
 *
 * Return: char pointer
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (*(src + n) != '\0')
	{
		*(dest + n) = *(src + n);
		n++;
	}
	*(dest + n) = '\0';

	return (dest);
}
