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

	if (n > 0)
	{
		printf("%d", *a);

		for (i = 1; i < n; i++)
		{
			printf(", %d", *(a + i));
		}
	}
	printf("\n");
}
