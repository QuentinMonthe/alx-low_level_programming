#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * _memcpy - This function copies memory area.
 * @src: pointer to memory area
 * @dest: destination copy memory area
 * @n: number bytes to copy of the memory area
 *
 * Return: point to destination copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
