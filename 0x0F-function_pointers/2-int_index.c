#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - this funtion searches for an integer
 * @array: array of element
 * @size: size of array
 * @action: function to compare element
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i = 0;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
