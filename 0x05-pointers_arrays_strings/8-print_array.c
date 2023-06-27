#include "main.h"
#include <stdio.h>

/**
 * print_array - This function prints a string.
 * @a: pointer to a char list (string)
 * @n: number elements to print
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("%d\n", *(a + i));
}
