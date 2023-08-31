#include "main.h"

/**
 * print_triangle - This program prints a triangle on the terminal.
 * @size: the size of the triangle
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = size; j > i; j--)
		{
			_putchar('!' - 1);
		}

		for (j = i; j > 0; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
