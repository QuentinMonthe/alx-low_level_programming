#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * reverse_array - This function reverses the content of
 * an array of integers.
 * @a: array of integers
 * @s2: number of elements of the array
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
