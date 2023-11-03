#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - the function creates an array of integers.
 * @min: min number
 * @max: max number
 *
 * Return: pointer to array (success) or NULL if not.
 */

int *array_range(int min, int max)
{
	int i, length = max - min + 1;
	int *arr = NULL;

	if (min > max)
	{
		return (NULL);
	}

	arr = (int *) malloc(sizeof(int) * length);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
