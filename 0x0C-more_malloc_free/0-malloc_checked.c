#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - the function allocates memory using malloc
 * @b: size of allocation
 *
 * Return: pointer to void type (success) or exit (98).
 */

void *malloc_checked(unsigned int b)
{
	void *arr = NULL;

	arr = malloc(b);

	if (arr == NULL)
	{
		exit(98);
	}

	return (arr);
}
