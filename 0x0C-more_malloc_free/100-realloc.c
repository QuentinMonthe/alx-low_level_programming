#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - the function allocates memory for an array.
 * @ptr: pointer to memory allocate
 * @old_size: old size of memory allocate
 * @new_size: new size of memory allocate
 *
 * Return: pointer to array (success) or NULL if not.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, size = old_size;
	char *new_ptr = NULL, *arr = ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = (char *) malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	if (ptr != NULL)
	{
		if (new_size < old_size)
			size = new_size;

		for (i = 0; i < size; i++)
		{
			new_ptr[i] = arr[i];
		}

		free(ptr);
	}
	ptr = (void *)new_ptr;

	return (ptr);
}
