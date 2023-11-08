#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - this funtion executes the funtion action
 * @array: array of element
 * @size: size of array
 * @action: function to execute on each element of array
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0, len = (unsigned int) size;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
