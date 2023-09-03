#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - This function um of the two diagonals
 * of a square matrix of integers.
 * @a: pointer to array of array
 * @size: size of matrix
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, tmp, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			tmp = i * size + j;
			if (i == j)
			{
				sum1 += *(a + tmp);
			}

			if (i + j + 1 == size)
			{
				sum2 += *(a + tmp);
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
