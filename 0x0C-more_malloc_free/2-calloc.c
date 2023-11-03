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
	unsigned int i, length = nmemb * size;
	char *arr = NULL;

	if (length == 0)
	{
		return (NULL);
	}

	arr = (char *) malloc(size * nmemb);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		arr[i] = 0;
	}

	return ((void *)arr);
}
