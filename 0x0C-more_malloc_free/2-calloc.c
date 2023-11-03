#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - the function allocates memory for an array.
 * @nmemb: number elements of array
 * @size: bytes of each elements of array
 *
 * Return: pointer to array (success) or NULL if not.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr = NULL;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	arr = malloc(size * nmemb);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}

	return ((void *)arr);
}
