#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * _memset - This function fills memory with a constant byte.
 * @s: string constant
 * @b: constant byte
 * @n: number bytes of the memory area pointed
 *
 * Return: String
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
