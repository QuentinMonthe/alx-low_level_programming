#include "main.h"

/**
 * print_diagonal - This program draws a diagonal line on the terminal.
 * @n: number of straight line
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('!' - 1);
		}
		_putchar('Z' + 2);
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
