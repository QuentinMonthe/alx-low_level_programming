#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - the function frees a 2 dimensional array of integers.
 * @grid: array
 * @height: height of array
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (height > 0 || grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(*(grid + i));
		}
	}

	free(grid);
}
