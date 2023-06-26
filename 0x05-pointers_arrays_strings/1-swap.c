#include "main.h"

/**
 * swap_int - This function swaps the values of two integers.
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int value = *a;

	*a = *b;
	*b = value;
}
