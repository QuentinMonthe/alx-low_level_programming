#include "main.h"

/**
 * print_line - This program draws a straight line in the terminal.
 * @n: number of straight line
 *
 * Return: Nothing
 */

void print_line(int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
